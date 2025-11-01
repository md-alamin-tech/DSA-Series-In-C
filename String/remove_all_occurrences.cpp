#include<iostream>
#include<string>
using namespace std;

string findOcr(string &arr, string part){
    while(arr.length() > 0 && arr.find(part) < arr.length()){
        arr.erase(arr.find(part), part.length());
    }

    return arr;
}

int main(){
    string arr = {"abcabcbacabc"};
    string part = {"abc"};

    cout << findOcr(arr, part) << endl;
}
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    int st = 0, end = str.size() -1;

    while (st < end)
    {
        swap(str[st++], str[end--]);
    }
    // Reverse a character string  vector
    for(char value : str){

        cout << value << " ";
    }
    cout << endl;

    //Reverse a  string in  vector
    string Arr = {"Hello World"};
    reverse(Arr.begin(), Arr.end());

    cout << Arr << endl;

    return 0;
}
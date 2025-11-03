#include<iostream>
#include <algorithm>
using namespace std;

string rvsStr(string a){
    int n = a.length();
    string ans = "";

    reverse(a.begin(), a.end());

    for (int i = 0; i < n; i++){
        string word = "";
        while (i < n && a[i] != ' '){
            word += a[i];
            i++;
        }
        reverse(word.begin(), word.end());
        if (word.length() > 0){
            ans += " " + word;
        }
    }
    return ans.substr(1);

}

int main(){
    string a = "this is the solution for string reverse";
    cout << rvsStr(a);
}
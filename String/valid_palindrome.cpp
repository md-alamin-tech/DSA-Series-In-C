#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isAlphaNum(char ch ){
   if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
       return true;
   }
   return false;
}

bool isPalinDrome(string arr){
    int st = 0, end = arr.size() - 1;
    while(st < end){
        if(!isAlphaNum(arr[st])){
            st++; continue;
        }
        if(!isAlphaNum(arr[end])){
            end--; continue;
        }

        if(arr[st] != arr[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main(){
    string arr = {"1234321"};
    if(isPalinDrome(arr)){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" << endl;
    }
    return 0;
}
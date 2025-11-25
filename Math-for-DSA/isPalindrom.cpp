#include<iostream>
#include<climits>
using namespace std;

int reverse(int n){
    int revNum = 0;
    
    while(n != 0){
        int dig = n % 10;

    if(revNum > INT_MAX/10 && revNum < INT_MAX/10){
        return false;
    }
        revNum = revNum * 10 + dig;
        n = n / 10;
    }
    return revNum;
}

bool isPalindrom(int n){
    if(n < 0){
        return false;
    }
    int reverseNum = reverse(n);

    return n == reverseNum;
}

int main(){
    int n = 353;
    cout << isPalindrom(n) << endl;

    return 0;
}
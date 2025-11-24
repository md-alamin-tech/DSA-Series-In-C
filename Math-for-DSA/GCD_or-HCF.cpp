#include<iostream>
using namespace std;

int findGCD(int a, int b){
    int gcd = 1;

    if(a==0){
        return gcd = b;
    }
    if(b==0){
        return gcd = a;
    }
    if(a==b){
        return gcd = a; //We also return gcd = b
    }

    for (int i = 1; i < min(a, b); i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        }
    }

    return gcd;
}

int main(){
    int a = 24, b = 28;

    cout << findGCD(a, b);
    return 0;
}
#include<iostream>
#include<vector>
#include <cmath>
using namespace std;

int countPrime(int n){
    if(n <= 2){
        return 0;
    }
    vector<bool> isPrime(n, true);
    int count = 0;

    for (int p = 2; p < sqrt(n); p++){
        if(isPrime[p]){
            for (int nonPrime = p * p; nonPrime < n; nonPrime += p){
                isPrime[nonPrime] = false;
            }
        }
    }

    for (int i = 2; i < n; i++){
        if(isPrime[i]){
            count++;
        }
    }
    return count;
}

int main(){
    int n = 10;
    cout << countPrime(n);

    return 0;
}
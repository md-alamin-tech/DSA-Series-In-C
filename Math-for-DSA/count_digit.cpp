#include<iostream>
#include <cmath>
using namespace std;

int printDigit(int n){
    int count = 0;
    int sum = 0;
    while(n!=0){   // TC = (log base 10 ^n)
        int digit = n % 10;
        count++;
        sum += digit;
        cout << digit << endl;

        n = n / 10;
    }
    cout << "Sum of digit: " << sum << endl;
    return count;
}

int main(){
    int n = 2546;
    cout <<"Total count: "<<printDigit(n) << endl;

    cout << "Count digit in short cut: " << (int)(log10(n) + 1) << endl;

    return 0;
}
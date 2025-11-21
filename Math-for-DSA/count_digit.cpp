#include<iostream>
using namespace std;

int printDigit(int n){
    int count = 0;
    while(n!=0){
        int digit = n % 10;
        count++;
        cout << digit << endl;

        n = n / 10;
    }
    return count;
}

int main(){
    int n = 2546;
    cout <<"Total count: "<<printDigit(n);

    return 0;
}
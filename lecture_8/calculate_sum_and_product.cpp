#include<iostream>
using namespace std;

void calculateSumAndProduct(int arr[],int sz){
    int sum = 0;
    int product = 1;
    for (int i = 0; i < sz; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum = " << sum << " Product = " << product;
}

int main(){
    int arr[] = {4, 5, 9, 8, 6};
    int sz = sizeof(arr) / sizeof(arr[0]);
    calculateSumAndProduct(arr, sz);
    
    return 0;
}
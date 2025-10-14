#include<iostream>
#include <climits>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 6, 5, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for (int i = 0; i < sz; i++){
       if(arr[i]<smallest){
           smallest = arr[i];
           minIndex = i;
       }
       if(arr[i]>largest){
           largest = arr[i];
           maxIndex = i;
       }
    }
    swap(arr[minIndex], arr[maxIndex]);
    for (int i = 0; i < sz;i++){
        cout  << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
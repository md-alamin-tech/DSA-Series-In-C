#include<iostream>
using namespace std;

int linSearch(int arr[],int target, int size){
    
    for (int i = 0; i < size;i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10, 8, 6, 02, 5, 6, 4};
    int target = 20;
    int size = sizeof(arr) / sizeof(arr[4]);

    cout << linSearch(arr, target, size) << endl;
    return 0;
}
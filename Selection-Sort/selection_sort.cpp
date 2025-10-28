#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int n){
    for (int i = 0; i < n - 1; i++){
        int smallestInd = i;
        for (int j = i + 1; j < n; j++){
            if(arr[j] < arr[smallestInd]){
                smallestInd = j;
            }
        }
        swap(arr[i], arr[smallestInd]);
    }
}

void printArr(vector<int> arr, int n){
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();

    selectionSort(arr, n);
    printArr(arr, n);
    return 0;
}
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> A = {1, 2, 3, 5, 6, 4};
    int pivot = -1, n = A.size();

    //Find the pivot
    for (int i = n - 2; i >= 0; i--){
        if(A[i] < A[i+1]){
            pivot = i;
            break;
        }
    }
    // If there is no pivot in the array, then reverse the array
    if(pivot == -1){
        reverse(A.begin(), A.end());
        return 0;
    }
    // Find right most element > pivot
    for (int i = n - 1; i > pivot ; i--){
        if(A[i] > A[pivot]){
            swap(A[i], A[pivot]);
            break;
        }
    }
    // Just reverse the Arr from pivot to n-1, for find next permutation
    int i = pivot + 1, j = n - 1;

    while(i < j){
        swap(A[i++], A[j--]);
    }

    for (int i = 0; i < n; i++){
        cout << A[i] << " ";
    }

    return 0;
}
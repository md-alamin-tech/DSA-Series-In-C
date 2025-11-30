#include<iostream>
#include <climits>
using namespace std;

int getMaxSum(int arr[][3], int rows, int cols){
    int maxSum = INT_MIN;
    for (int i = 0; i < rows; i++){
        int rowSum = 0;
        for (int j = 0; j < cols; j++){
            rowSum += arr[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }
    return maxSum;
}


int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rows = 3;
    int cols = 3;

    cout<<getMaxSum(arr, rows, cols);
    return 0;
}

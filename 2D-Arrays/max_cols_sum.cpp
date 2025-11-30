#include<iostream>
using namespace std;

int maxColSum(int arr[3][3], int rows, int cols){
    int maxSum = 0;
    for(int i = 0; i < cols; i++){
        int colSum = 0;
        for (int j = 0; j < rows; j++){
            colSum += arr[j][i];
        }
        maxSum = max(maxSum, colSum);
    }
    return maxSum;
}

int main(){
    int arr[3][3] = {{1, 2, 3}, {300, 5, 6}, {7, 8, 9}};

    int rows[3];
    int cols[3];

    cout << "Max sum of columns is: " << maxColSum(arr, 3, 3) << endl;

    return 0;
}

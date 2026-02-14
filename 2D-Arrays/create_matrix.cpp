#include<iostream>
#include <climits>
using namespace std;

int getRowSum(int matrix[4][3], int rows, int cols){

    int maxRowSum = INT_MIN;
    for (int i = 0; i < rows; i++){
        int rowSumI = 0;
        for (int j = 0; j < cols; j++){
            rowSumI += matrix[i][j];
        }

        maxRowSum = max(rowSumI, maxRowSum);
    }

    return maxRowSum;
}

int main(){
    int matrix[4][3] = {{1, 4, 5}, {7, 8, 9}, {11, 44, 77}, {12, 3, 22}};

    int rows = 4;
    int cols = 3;
    int key = 11;

    cout << getRowSum(matrix, rows, cols) << endl;

    // for (int i = 0; i < rows; i++){
    //     for (int j = 0; j < cols; j++){
    //         if(matrix[i][j] == key){
    //             cout << matrix[i][j] << endl;
    //             cout << i <<" " << j;
    //             return 0;
    //         }
    //     }
              
    // }
    // cout << -1;
    // for (int i = 0; i < rows; i++){
    //     for (int j = 0; j < cols; j++){
    //         cin >> matrix[i][j];
    //     }
    //     cout << endl;
    // }

    //     for (int i = 0; i < rows; i++)
    //     {
    //         for (int j = 0; j < cols; j++)
    //         {
    //             cout << matrix[i][j] << "  ";
    //         }
    //         cout << endl;
    //     }

    return 0;
}

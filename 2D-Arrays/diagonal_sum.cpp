#include<iostream>
using namespace std;


int diagonalSum(int arr[][4], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j){
                sum += arr[i][j];
            }else if (j == n - i - 1){
                sum += arr[i][j];
            }
        }
    }
    return sum;
}
int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int n = 4;
    cout<<diagonalSum(arr,n);
    return 0;
}

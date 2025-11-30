#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;
    int key = 8;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(arr[i][j]== key){
                cout << "Element found at row " << i << " and column " << j << endl;
                return 0;
            }
        }
    }

    cout << "Element not found" << endl;
    return 0;
}

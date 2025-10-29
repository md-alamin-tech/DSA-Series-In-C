#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> A = {1, 2, 3, 0, 0, 0};
    vector<int> B = {4, 5, 6};

    int n = 3, m = B.size();
    int i = n-1, j = m - 1, indx = n + m - 1;

    while(i >= 0 && j >= 0){
        if(A[i] >= B[j]){
            A[indx--] = A[i--];
        }else{
            A[indx--] = B[j--];
        }
    }
    while(j >= 0){
        A[indx--] = B[j--];
    }

    for (int i = 0; i < A.size(); i++){
        cout << A[i] << " ";
    }
    return 0;
}
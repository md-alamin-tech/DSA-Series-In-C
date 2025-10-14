#include<iostream>
#include<vector>
using namespace std;

void reveseArr(vector<int>& arr, int sz){
    int start = 0, end = sz - 1;

    while (arr[start] < arr[end])
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    
}

int main(){
    vector<int> arr = {1, 2, 3, 5, 6};
    int sz = arr.size();

    reveseArr(arr, sz);

    for (int i = 0; i < sz;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;


int recBinarySearch(vector<int> arr, int target, int st, int end){
if(st <= end){
    int mid = st + (end - st) / 2;
    if(arr[mid] < target){
        return recBinarySearch(arr, target, mid + 1, end);
    }else if(arr[mid] > target){
        return recBinarySearch(arr, target, st, end - 1);
    }else
        return mid;
    }
    return -1;
}


int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int st = 0, end = arr.size() - 1;
    int target = 5;

    cout << recBinarySearch(arr, target, st, end) << endl;

    return 0;
}
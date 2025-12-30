#include<iostream>
#include<vector>
using namespace std;

int bs(vector<int> arr, int st, int end, int tar ){

    if (st <= end) {
    int mid = st + (end - st) / 2;

    
    if(arr[mid] == tar){
            return mid;
    }else if (arr[mid] <= tar) {
      return  bs(arr, mid + 1, end, tar);
    }else{
        return bs(arr, st, mid - 1, tar);
    }

}
    
    return -1;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 7, 9};
    int sz = arr.size();
    int st = 0;
    int end = sz - 1;
    int tar = 9;

    cout << bs(arr, st, end, tar);
}
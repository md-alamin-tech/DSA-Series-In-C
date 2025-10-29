#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 0, 1, 2, 2, 1, 0};
    int n = arr.size();

    int low = 0, mid = 0, high = n - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
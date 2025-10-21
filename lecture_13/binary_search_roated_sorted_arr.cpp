#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int st = 0, end = arr.size() - 1;
    int tar = 2;

    while(st <= end){
        int mid = st + (end - st) / 2;
        if (tar == arr[mid])
        {
            cout << mid << endl;
            return mid;
        }
        
        if(arr[st] <= arr[mid]){   //left sorted
            if(arr[st] <= tar &&  tar < arr[mid]){
                end = mid - 1;
            }else {
                st = mid + 1;
            }
        }else{ // right sorted
            if (arr[mid] < tar && tar <= arr[end]){
                st = mid + 1;
            }else{
                end = mid - 1;
            }
        }
        
    }
    cout << "Target not found" << endl;
    return 0;

}
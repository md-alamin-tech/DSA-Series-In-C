#include<iostream>
#include<vector>
#include <climits>
using namespace std;

bool isValid(vector<int> arr, int n, int p, int maxAllowedTime){
    int painter = 1, time = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] > maxAllowedTime){
            return false;
        }

        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }else{
            painter++;
            time = arr[i];
        }
    }

    return painter > p ? false : true;
}

int painterAllowcation(vector<int> arr, int n, int p){
     if(p > n){
        return -1;
    }

    int sum = 0, maxValue = INT_MIN;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    int st = maxValue, end = sum;  //range of possible ans
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st) / 2;

        if(isValid(arr, n, p, mid)){
            ans = mid;
            end = mid - 1;
        }else{
            st = mid + 1;
        }

    }
    return ans;
}


int main(){
    vector<int> arr = {40, 20, 30, 10};
    int n = arr.size();
    int p = 2;

    cout << painterAllowcation(arr, n, p);
}

#include<iostream>
using namespace std;

int main(){
    int arr[] = {-1, 2, 3, 4, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int st = 0, end = n - 1;
    
    int target = 8;
    int ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (arr[mid] < target)
        {
            st = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else 
        {
            ans = mid;
            cout << ans;
            break;
        }
    }

    return ans;
}
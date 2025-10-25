#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = a.size() - 1;
    int st = 0, end = n -1;
    if(n==1) return a[0];

    while(st <= end){
        int mid = st + (end - st) / 2;
        if(mid == 0 && a[0] != a[1]) return a[mid];
        if(mid == n-1 && a[n-1] != a[n-2]) return a[mid];
        if(a[mid-1] != a[mid] && a[mid] != a[mid+1]) return a[mid];

        if(mid % 2 == 0){
            if(a[mid-1] == a[mid]){
                end = mid - 1;
            }else {
                st = mid + 1;
            }
        } else{
            if(a[mid - 1] == a[mid]){
                st = mid + 1;
            } else{
                end = mid - 1;
            }
        }
        
    }

    return -1;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 2, 3, 4};
    int n = nums.size();
    vector<int> ans(n, 1);

    // prefix => ans
    for (int i = 1; i < n; i++){
        ans[i] = ans[i - 1] * nums[i - 1];
    }

    int suffix = 1;
    for (int i = n - 2; i >= 0; i--){
        suffix *= nums[i+1];
        ans[i] *= suffix; 
    }

    for (int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;

}
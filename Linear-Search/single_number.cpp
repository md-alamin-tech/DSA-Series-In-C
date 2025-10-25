#include <iostream>
#include<vector>
using namespace std;


int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums) {
        ans = ans ^ val;
    }
    return ans;
}

int main(){
    vector<int> nums;

    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(20);

    cout << singleNumber(nums) << endl;

    return 0;
}
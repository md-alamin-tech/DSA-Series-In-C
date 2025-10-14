#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> nums,int sz,int target){
    for (int i = 0; i < sz;i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> nums;
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(8);
    nums.push_back(9);

    int sz = nums.size();
    int target = 10;

    cout << linearSearch(nums, sz, target);

    return 0;
}
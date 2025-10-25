#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums = {1, 1, 2, 2, 3, 3, 3, 3, 3};
int n = nums.size();

int freq = 1, ans = 0;
  for (int i = 0; i < n; i++)
  {
    if(freq == 0){
        ans = nums[i];
    }else if(ans == nums[i]){
        freq++;
    }else
        freq--;
    
  }
  
  int count = 0;
  for(int val : nums){
    if (val==ans)
    {
        count++;
    }
}
    if (count > n/2)
    {
        cout << ans << endl;
    }else
        cout << "-1" << endl;
  
  return 0;
}
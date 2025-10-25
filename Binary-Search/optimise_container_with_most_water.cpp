#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> containter = {1, 10, 5, 7, 3, 6, 2, 2, 10};
    int sz = containter.size();

    int maxWater = 0;
    int left = 0, right = sz - 1;

    while (left < right)
    {
        int weidth = right - left;
        int hight = min(containter[left], containter[right]);
        int curWater = weidth * hight;
        maxWater = max(curWater, maxWater);

        containter[left] < containter[right] ? left++ : right--;
   }
    cout << maxWater;

    return 0;
}
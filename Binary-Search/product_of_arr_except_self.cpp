#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1, 2, 3, 4};
    int sz = arr.size();
    vector<int> ans(sz, 1);
    

    for (int i = 0; i < sz; i++){
        int product = 1;
        for (int j = 0; j < sz; j++){

            if (i != j)
            {
                product *= arr[j];
            }
           
        }
         ans[i] = product;
    }
     for (int val : ans)
        cout << val << " ";
    return 0;
}
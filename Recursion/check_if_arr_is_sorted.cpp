#include<iostream>
#include<vector>
using namespace std;

bool isSorted(vector<int>ar,int sz){
    if(sz == 0 || sz == 1){
        return true;
    };

    return ar[sz - 1] >= ar[sz - 2] && isSorted( ar, sz - 1);
}

int main(){
    vector<int>ar = {1, 2, 8, 4, 5};
    int sz = ar.size();

    cout<< isSorted(ar, sz);
}
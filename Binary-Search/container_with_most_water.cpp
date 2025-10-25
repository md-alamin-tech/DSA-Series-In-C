#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> container = {1, 8, 6, 2, 5, 4, 3, 7};
    int sz = container.size() ;
    int maxWater = 0;

    for (int i = 0; i < sz; i++){
        for (int j = i + 1; j < sz; j++){
            int weidth = j - i;
            int height = min(container[i], container[j]);
            int currWater = weidth * height;

            maxWater = max(currWater, maxWater);
        }
    }
    cout << maxWater;
    return 0;
}
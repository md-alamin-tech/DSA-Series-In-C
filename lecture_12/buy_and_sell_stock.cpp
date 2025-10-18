#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices, int sz){
    int bestBuy = prices[0], maxPft = 0;

    for (int i = 1; i < sz; i++){
    if(prices[i] > bestBuy){
        maxPft = max(maxPft, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << maxPft << endl;
}



int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int sz = prices.size();

    maxProfit(prices, sz);

    return 0;
}
#include<iostream>
using namespace std;

int binToDecimal(int biNum){
    int ans = 0, pow = 1;

    while(biNum > 0){
        int rem = biNum % 10;
        ans += (rem * pow);

        biNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main(){

    int biNum = 1010;
    cout << binToDecimal(biNum) << endl;

    return 0;
}
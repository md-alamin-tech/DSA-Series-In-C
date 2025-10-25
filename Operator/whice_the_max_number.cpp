#include <iostream>
using namespace std;

int findMaxNum(int a, int b, int c, int d){
    int max = a;

    if(b>max){
        max = b;
    }
    if(c>max){
        max = c;
    }
    if(d>max){
        max = d;
    }

    return max;
}

int main() {
    int a = 10;
    int b = 50;
    int c = 60;
    int d = 56;

    cout << findMaxNum(a, b, c, d) << endl;

    return 0;
}
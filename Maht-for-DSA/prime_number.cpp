#include<iostream>
using namespace std;

string isPrime(int n){
    for (int i = 2; i < n; i++)
    {
        if (n%2 == 0)
        {
            return "Non Prime";
        }
        
    }
    return "Prime";
}
int main(){
    int n = 10;
    cout<<isPrime(n)<<endl;


    return 0;
}

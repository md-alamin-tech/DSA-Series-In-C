#include <iostream>
using namespace std;

int main() {
    // int n = 3;
    
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << " ";
    // }
    // return 0;


    // Problem 1 
    // int n = 20;
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     // sum = sum + i;
    //     sum += i;
    //     if (i == 5)
    //     {
    //         break;
    //     }
        
    // }
    // cout << sum;
    // return 0;

    // Problem 2
    // int n = 20;
    // int oddSum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     if (i%2 != 0)
    //     {
    //         oddSum += i;
    //     }
        
    // }
    // cout << "odd sum : " << oddSum << endl;
    // return 0;

    // Problem 3
    int n = 7;
    bool isPrime = true;
    for (int i = 2; i*i <= n; i++)
    {
       if (n%i == 0)
       {
           isPrime = false;
           break;
       }
      
    }
    if (isPrime == true)
    {
        cout << "Prime number\n";
    }else {
        cout << "Non prime number\n";
    }
    
}
#include<iostream>
using namespace std;

int main () {
    // int num = 1;
    // int n = 3;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < n; j++)
    //    {
    //        cout << num << " ";
    //        num++;
    //    }
    //    cout << endl;
    // }
    // char ch = 'A';
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //    for (int j = 0; j < i +1; j++)
    //    {
    //        cout << "* ";
    //    }
    //    cout << endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i+1; j++)
    //     {
    //         cout << (i + 1) << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = 0; j < i + 1; j++)
    //   {
       
    //     cout << ch << " ";
        
         
    //   }
    //   ch = ch + 1;
    //   cout << endl;
    // }

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // {
      
    //   for (int j = 1; j <= i+1; j++)
    //   {
    //     cout << j << " ";
    //   }
      
    //   cout << endl;
    // }

    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //   for (int j = i + 1; j > 0; j --) {
    //     cout << j << " ";
        
    //   }
    //   cout << endl;
    // }
    int n = 4;
    int ch = (char)'A';

    for (int i = 0; i < n; i++){
      for (int j = i + 1; j > 0; j--){
        cout << ch << " ";
        
      }
      cout << endl;
      
    }
}
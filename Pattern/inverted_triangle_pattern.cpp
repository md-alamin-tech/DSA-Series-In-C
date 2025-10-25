#include<iostream>
using namespace std;

int main() {

    int n = 4;
     char ch = 'A';
    for (int i = 0; i < n; i++){
        // print space
       
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        //print number
        for (int j = 0; j < n - i; j++){
            cout << ch;
            
        }
        ch++;
        cout << endl;
    }
}
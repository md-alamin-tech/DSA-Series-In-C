#include <iostream>
#include <string>
using namespace std;

int main(){
    int a, b;
    string numbers[] = { "zero", "one", "two", "three", "four", "five","six","seven","eight","nine"};
    cin >> a >> b;

    for (int i = a; i <= b;i++){
        if (i <= 9)
        {
            cout << numbers[i] << endl;
        }
        else {
            cout << (i % 2 == 0 ? "even" : "odd") << endl;
        }
    }
    return 0;
}
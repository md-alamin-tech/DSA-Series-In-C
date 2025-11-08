#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    
    void print(string name){
        cout << name << endl;
    }

    void print(char ch){
        cout << ch;
    }
};
int main(){
    Student s1;

    s1.print("Al amin");
    s1.print('$');
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int id;
};

class Student : public Person{
    int roll;
};

class Teacher : public Person{
    string subject;
    double salary;
};

int main(){
    Teacher t1;
    t1.name = "John";
    t1.id = 1234;

    cout << t1.name << endl;
    cout << t1.id;
}
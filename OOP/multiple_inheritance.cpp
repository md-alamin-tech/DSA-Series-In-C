#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    int roll;
};

class Teacher{
public:
    string subject;
};

class TA : public Student, public Teacher{
public:
};

int main(){
    TA t1;
    t1.name = "Tony";
    t1.subject = "Engineering";

    cout << t1.name << endl;
    cout << t1.subject;
}
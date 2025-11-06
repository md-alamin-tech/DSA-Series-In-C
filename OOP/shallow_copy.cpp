#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;
    float* cgpaPtr;

    Student(string name, float cgpa){
        this->name = name;
        cgpaPtr = new float;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};
int main(){
    Student s1("al amin", 4.55);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 5.00; // this is the problem of shallow copy
    s1.getInfo();
}
#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string name;
    double* cgpaPtr;

    student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }


    void getInfo(){
        cout << "name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};
int main(){

    student s1("al amin", 4.58);
    student s2(s1);
    s2.name = "neha";
    *(s2.cgpaPtr) = 5.00;

    s1.getInfo();
    s2.getInfo();
    
}
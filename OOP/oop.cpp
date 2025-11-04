#include<iostream>
#include<string>
using namespace std;

class teacher{
private:
    double salary;
public:
    teacher(){
        department = "Computer Science";
    }
    //Properties/ Attribute
    string name;
    string department;
    string sub;
    

    //Methods/ Member functions
    void changeDept(string newDep){
        department = newDep;
    }

    //Setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }

};

int main(){
    teacher t1; //Constractor call
    t1.name = "John";
    t1.department = "Computer Science";
    t1.sub = "C++";
    t1.setSalary(20000);

    cout << t1.department << endl;
    cout << t1.getSalary() << endl;
}
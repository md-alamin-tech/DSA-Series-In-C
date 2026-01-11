#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    double id;

    Person(string name, double id){
        this->name = name;
        this->id = id;
    }

    // ~person(){
    //     cout << "delete from parent constructor" << endl;
    // }
};

class student :public Person{
public:
    int roll;
    student(string name, double id, int roll): Person(name, id){
        this->roll = roll;
    }

    // ~student(){
    //     cout << "delete from child constructor" << endl;
    // }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "id: " << id << endl;
        cout << "roll: " << roll << endl;
    }
};
int main(){
    student s1("Al amin", 2541, 1234);

    s1.getInfo();
}
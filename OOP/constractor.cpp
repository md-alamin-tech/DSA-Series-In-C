#include<iostream>
#include<string>
using namespace std;

class Teacher {
private:
double salary;

public:
    //non-peramiterized
    // Teacher(){
    //     dept = "Computer Science";
    // }

    // peramiterized
    string name;
    string dept;
    string sub;

    Teacher(string name, string dept, string sub){
        this->name = name;
        this->dept = dept;
        this->sub = sub;
    }

    //copy constructor
    Teacher (Teacher &orgObj){
        cout << "i am custom copy constructor..\n";
        this->name = orgObj.name;
        this-> dept = orgObj.dept;
        this->sub = orgObj.sub;
    }
    
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "subject: " << sub << endl;
    }
    
};

int main(){
    Teacher t1("John", "Computer Science", "C++");
    // t1.getInfo();

    Teacher t2(t1);
    // t2.getInfo(); //default copy constructor -invoke
    t2.getInfo();

    // cout << t1.dept;
}
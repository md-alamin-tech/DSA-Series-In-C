#include<iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
};

class student : public person{
public:
    int id;
};

class grudStudent : public student{
public:
    string reseachTopic;
};
int main(){
    grudStudent s1;
    s1.name = "Tony";
    s1.id = 1234;
    s1.reseachTopic = "quantum physics";

    cout << s1.name << endl;
    cout << s1.id << endl;
    cout << s1.reseachTopic << endl;
}
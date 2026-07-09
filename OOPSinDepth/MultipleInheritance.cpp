#include<iostream>
#include<string>
using namespace std;


class Student{
public:
    string name;
    int rollno;
};

class Teacher{
public:
    string subject;
    double salary;
};

class TeacherAssistant : public Student, public Teacher{
public:
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "rollno: " << rollno << endl;
        cout << "subject: " << subject << endl;
        cout << "salary: " << salary << endl;
    }
};
int main(){
    TeacherAssistant TA1;
    TA1.name = "Rahul Vaidya";
    TA1.rollno = 1221;
    TA1.subject = "Digital Signal Processing";
    TA1.salary = 12000;

    TA1.getInfo();
    return 0;
}
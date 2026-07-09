#include<iostream>
#include<string>
using namespace std;

//Constructor used to Initialize Objects
class Teacher{
public: //Constructor should always be Public 

    //Non-Parameterized Constructor
    // Teacher(){
    //     cout << "Hello, I am Constructor, Created by Programmer not Compiler\n";
    // }
    string name;
    string dept;
    //Parameterized Constructor
    Teacher(string name, string dept){
        //this-> creates difference between the Object and Constructor and Helps Compiler to Understand.
        this->name = name; 
        this->dept = dept;
    } 
    //Copy Constructor
    Teacher(Teacher &orgObj){
        cout << "I am Copy Constructor\n";
        this->name = orgObj.name; 
        this->dept = orgObj.dept;
    }
    void getInfo(){
        cout << "Name of Teacher: " << name << endl;
        cout << "Department of Teacher: " << dept << endl;
    }
};

class Student{
public:

    string name;
    string dept;
    int rollno;

    Student(string n, string d, int rn){
        name = n;
        dept = d;
        rollno = rn;
    }
    void studInfo(){
        cout << "Name of Student: " << name << endl;
        cout << "Department of Student: " << dept << endl;
        cout << "RollNo of Student: " << rollno << endl;
    }

};
int main(){
    //Created an Object
    Teacher t1("Mohit Agrawal", "Electronics & Computer Science");
    //t1.getInfo();

    Teacher t2(t1); //Default Copy Constructor
    t2.getInfo();

    Student s1("Garima Agrawal", "CS", 100);
    s1.studInfo();
        
}


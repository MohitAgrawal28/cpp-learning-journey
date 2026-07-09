#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;
    
};

class Student : public Person{
public:
    int rollno;
};

class GradStudent : public Student{
public:
    string researcharea;
    void getInfo(){
        cout << "name:" << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
        cout << "researcharea: " << researcharea << endl;
    }
    
};
int main(){
    GradStudent s1;
    s1.name = "Mohit";
    s1.age = 21;
    s1.rollno =  1212;
    s1.researcharea = "QuantumPhysics";

    s1.getInfo();
    
    return 0;
}
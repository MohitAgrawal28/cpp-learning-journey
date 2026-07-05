#include<iostream>
#include<string>
using namespace std;

class Teacher{
//There are 3 Types of Access Modifiers in C++ (Public, Private, Protected)
//private: (Assigning Access Modifiers -> By default private)
//public: (Data and Methods Accesible to Anyone)
//Protected -> we will learn this in Inheritence 
private:
    double salary; //data hiding -> Encapsulation
public:
    //Properties or Attributes; 
    string name;
    string dept;
    string subject;

    //Methods or Member Functions;
    void changeDept(string newDept){
        dept = newDept;
    } 
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
};

int main(){
    //Object Creation
    Teacher t1;
    t1.name = "Mohit Agrawal";
    t1.dept = "ECS";    
    t1.subject = "c++";
    t1.setSalary(25000);

    cout << t1.getSalary() << endl;
    return 0;
}
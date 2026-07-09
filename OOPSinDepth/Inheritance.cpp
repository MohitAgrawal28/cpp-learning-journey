//Parent Passes Their Qualities to Child In English we Call it Inheritance.
//Inherit -> Lena, Virasat.
//Therefore Parent is parent class child is child class or derived class
//Why Inheritance -> For Code Reusability.

#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    string name;
    int age;

    // Person(string name, int age){
    //     this->name = name;
    //     this->age = age;
    // }
    Person(string name, int age){
        cout << "Parent Constructor...\n"; //Base class
        this->name = name;
        this->age = age;
    }

    ~Person(){
        cout << "Parent Destructor...\n";
    }
};


class Student : public Person{ //This is Single Inheritance
    //name, age, rollno
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age){
        cout << "Child Constructor...\n"; //Derived class
        this->rollno = rollno;
    }

    ~Student(){
        cout << "Child Destructor...\n";
    }
    void getInfo(){
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollno: " << rollno << endl;
    }
};
int main(){
    Student s1("rahul kumar", 21, 1222);
    
    s1.getInfo();
    return 0;
}
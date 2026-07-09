//Run Time Polymorphism...
//Overriding -> Inheritance (Parameters can be same, Implementation should be different)

#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent/Base Class";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child/Derived Class";
    }
};
int main(){
    Parent p1;
    p1.getInfo();
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

class Parent{
public:
    void getInfo(){
        cout << "Parent/Base Class";
    }

    virtual void hello(){
        cout << "Hello from Parent\n";
    }
};

class Child : public Parent{
public:
    void getInfo(){
        cout << "Child/Derived Class";
    }

    void hello(){
        cout << "Hello from Child\n";
    }
};
int main(){
    Child c1;
    c1.hello();
    return 0;
}
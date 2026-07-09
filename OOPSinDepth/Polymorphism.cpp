//This File is For Constructor Overloading as we can see that if we are not 
//passing any Parameter then defaulty it is priniting non parameterized function

//This is Example of Compile time Polymorphism
#include<iostream>
#include<string>
using namespace std;

class Student{
public:
    string name;

    Student(){
        cout << "I am Non-Parameterized\n";
    }

    Student(string name){
        this->name = name;
        cout << "I am Parameterized\n";
    }
};

int main(){
    Student s1("Tony");
    return 0;
}
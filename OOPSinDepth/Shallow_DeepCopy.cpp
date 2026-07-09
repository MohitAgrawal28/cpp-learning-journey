#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name; 
    //The dereference operator (*), also known as the indirection operator,
    // is used in C++ to access or modify the value stored at the memory address held by a pointer.
    double* cgpaPtr;

    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; //Pointer Pointing to new Memory present in Heap
        *cgpaPtr = cgpa; // Storing 8.9 
    }

    //Copy Constructor
    Student(Student &obj){
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("rahul kumar", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;

    s2.name = "neha kumar";
    s1.getInfo();
    s2.getInfo();
    return 0;
}
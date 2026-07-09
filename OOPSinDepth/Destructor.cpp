//Destructor -> Deallocate the memory (static)
//Constructor -> allocate the memory
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

    //Destructor
    ~Student(){
        cout << "Hey, I am Destructor. I delete Everything\n";
        delete cgpaPtr; //Memory Leak
    }

    void getInfo(){
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("rahul kumar", 8.9);
    s1.getInfo();
    return 0;
}
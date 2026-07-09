#include<iostream>
#include<string>
using namespace std;

//Static Keyword in Function()
// void fun(){
//     static int a = 0; //Initialized Statement Run - 1 Time
//     cout << "a: " << a << endl;
//     a++;
// }

// int main(){
//     fun();
//     fun();
//     fun();
//     return 0;
// }


//Static Keyword in Class{};
class ABC{
public:
    ABC(){
        cout << "Constructor\n";
    }

    ~ABC(){
        cout << "Destructor\n";
    }
};

int main(){
    if(true){
        static ABC obj;
    }

    cout << "end of main function\n";
    return 0;
}
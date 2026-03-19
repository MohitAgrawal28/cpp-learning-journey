//Derefernce Operator means Value at address -> it will take out the value at given dereference address
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    cout<< *(ptr) << endl;
    cout<< *(&a) << endl;
}
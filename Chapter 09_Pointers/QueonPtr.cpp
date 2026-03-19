#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;

    cout<< *ptr << endl; //10
    cout<< **ptr2 << endl; // 10
    cout<< ptr << endl; // address of a
    cout<< *ptr2 << endl; // address of ptr which is address of a   ;
}
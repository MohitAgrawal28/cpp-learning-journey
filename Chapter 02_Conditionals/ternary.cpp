#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Value of X : ";
    cin>>x;

    //Using Ternary Operator
    //As we know the syntax-> condition ? if true : if false ;
    //We are doing this for odd or even;
    (x%2==0) ? cout<<"Even Number" : cout<<"Odd Number";
    //This way we can write and also it reduces Lines of codes
}
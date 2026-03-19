#include<iostream>
using namespace std;
//function Declaration
int printHello(){
    cout<<"Hello"<<endl;
    return 3;
}
int main(){
    //Function calling...
    int val = printHello();
    cout<<"Value = " << val <<  endl;
}
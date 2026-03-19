#include<iostream>
using namespace std;
int main(){
    int x;
    int y;
    char op;
    cout<<"Enter Number 1: ";
    cin>>x;
    cout<<"Enter Op: ";
    cin>>op;
    cout<<"Enter Number 2: ";
    cin>>y;


    if(op=='+'){
        cout<<x+y;
    }
    if(op=='-'){
        cout<<x-y;
    }
    if(op=='*'){
        cout<<x*y;
    }
    if(op=='/'){
        cout<<x/y;
    }

}
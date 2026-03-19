#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    cout<<"Enter c: ";
    cin>>c;

    if(a>b && a>c){
        cout<<"A is Greatest";
    }
    else if(b>a && b>c){
        cout<<"B is Greatest";
    }
    else{
        cout<<"C is Greatest";
    }
}
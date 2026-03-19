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

    //Nested If-else;
    if(a>b){ //a>b and b>c then a>b>c
        if(a>c){
            cout<<a << "IS GREATEST";
        }
        else{ //c>b b>a then c>b>a
            cout<<c << "IS GREATEST";
        }
    }
    else{
        if(b>c){ 
            cout<<b << "IS GREATEST";
        }
        else{
            cout<<c << "IS GREATEST";
        }
    }
}
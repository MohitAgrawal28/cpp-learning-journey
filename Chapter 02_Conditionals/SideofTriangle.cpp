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

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        cout<<"The a,b,c can be the side of an triangle";
    }
    else
    {
        cout<<"Oops, They cannot be a side of triangle";
    }
}
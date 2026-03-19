#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter A Number: ";
    cin>>x;
    if(x>=0){
        cout<<x;
    }
    else //n is less than 0
    cout<<-x;
}
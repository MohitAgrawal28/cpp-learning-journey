#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;

    int count;
    count = 0;

    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
}
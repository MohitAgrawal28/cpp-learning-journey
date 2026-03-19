#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    bool flag = true; //true means 1; and here true means prime
    for(int i = 2; i<=n/2; i++){
        if(n%i==0){
            flag = false; //false means 0; and here false means composite
            break;
        }
    }
    if(n==1){
        cout<<"Neither Prime Nor Composite";
    }
    else if(flag==true){
        cout<<"Prime Number";   
    }
    else{
        cout<<"Composite Number";
    }
}
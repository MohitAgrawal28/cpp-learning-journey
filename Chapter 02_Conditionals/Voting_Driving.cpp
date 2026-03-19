#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;

    if(age > 0){
        if(age >= 18){
            cout<<"Eligible for Voting";
        }
        if(age >= 21){
            cout<<"Eligible for Driving License too";
        }
        else{
            cout<<"Not Eligible for Voting";
        }
        
    }
}
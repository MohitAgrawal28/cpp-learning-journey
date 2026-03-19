#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter Year You want to Verify: ";
    cin>>year;

    if(year%400==0){
        cout<<"It's a Leap Year";
    }
    else if(year%100==0) {
        cout<<"Not a Leap Year";
    }
    else if(year%4==0){
        cout<<"It's a Leap Year";
    }
    else{
        cout<<"Not a Leap Year";
    }
    
    
}
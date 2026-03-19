#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter Value: ";
    cin>>x;

    if((x%5==0) || (x%3==0) && (x%15==0)) {
        cout<<"It is divisible by 5Or3 But not with 15";
    }
    else{
        cout<<"Not divisible by 15";
    }
}
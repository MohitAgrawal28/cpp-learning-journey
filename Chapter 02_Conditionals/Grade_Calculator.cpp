#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter The Marks: ";
    cin>>x;

    if(x>=90 && x<=100){
        cout<<"Hurray, Got A Grade";
    }
    if(x>=75 && x<=89){
        cout<<"Yayy, Got B Grade";
    }
    if(x>=50 && x<=74){
        cout<<"Okayy, Got C Grade";
    }
    else if (x<50){
        cout<<"Fail!";
    }

    
    
}
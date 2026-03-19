#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: ";
    cin>>n;
    int product = 1;
    int s1,s2,s3,s4,s5,s6 = 0;

    //Printing Factorial Of N:
    for(int i=1;i<=n;i++){
        product = product * i;
    }
    cout<<product;
    
}
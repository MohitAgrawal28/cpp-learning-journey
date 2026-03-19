#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i = 0; i<=n/2; i++){
        if(n%i==0){
            cout<<"Prime!";
            break;
        }
    }
}
#include<iostream>
using namespace std;
int main(){
    //Write 5 times "Hey, Mohit!" Using for Loop!
    //Question : Print Hello World n times, take n Input from Keyboard.

    int n;
    cout<<"Enter the Value: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Hello, World!"<<endl;
    }
}
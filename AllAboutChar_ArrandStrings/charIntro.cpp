#include<iostream>
using namespace std;


int main(){
    char arr[20];
    cout << "Enter Your Name: ";
    cin >> arr;
    arr[2] = '\0';
    cout << "Your name is: " << arr;
}
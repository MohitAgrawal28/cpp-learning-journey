#include<iostream>
using namespace std;

int findLength(char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char arr[20];
    cout << "Enter Your Name: ";
    cin >> arr;


    cout << "Your name is " << arr << endl;
    cout << "Length of Your Name is : " << findLength(arr);
}
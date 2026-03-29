#include<iostream>
#include<cstring>
using namespace std;

void ReversedString(char name[], int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(name[start++], name[end--]);
    }
}
int main(){
    char name[20];
    cout << "Enter the String you want to reverse: ";

    cin >> name;
    int n = strlen(name);
    ReversedString(name, n);
    cout << "Reversed String is " << name;
}
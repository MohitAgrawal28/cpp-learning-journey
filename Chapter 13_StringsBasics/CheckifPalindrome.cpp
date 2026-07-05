#include<iostream>
using namespace std;

bool checkIfPalindrome(char a[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        if(a[start] != a[end]) return 0;
        if(a[start] == a[end]){
            start++;
            end--;
        }
    }
    return 1;
}
void RevString(char name[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        swap(name[start++], name[end--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout << "Enter Your Name: " << endl;
    cin >> name;

    cout << "Your Name is: ";
    cout << name << endl;

    int len = getLength(name);
    cout << "Length of Your name is: " << len << endl;

    RevString(name, len);
    cout << "Your Name is: ";
    cout << name << endl;

    cout << "Palindrome or Not: " << checkIfPalindrome(name, len) << endl;

}

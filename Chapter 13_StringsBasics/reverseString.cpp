// Suppose input = Mohit
//So the output should be reverse of Mohit i.e tihoM;

#include<iostream>
using namespace std;

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

}
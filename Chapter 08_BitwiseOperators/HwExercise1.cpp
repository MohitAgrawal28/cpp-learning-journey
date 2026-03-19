//Figure out, How to find if a number is power of 2 Without any Loop...
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Num: ";
    cin>>n;
    if (n > 0 && (n & (n - 1)) == 0) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
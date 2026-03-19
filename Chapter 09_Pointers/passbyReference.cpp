#include<iostream>
#include<vector>
using namespace std;
void changeA(int* ptr){
    *ptr = 20; //Pass by Reference Using Pointers
}
int main(){
    int a = 10;
    changeA(&a);

    cout<<"Inside Main Function: " << a << endl;
    return 0;
}
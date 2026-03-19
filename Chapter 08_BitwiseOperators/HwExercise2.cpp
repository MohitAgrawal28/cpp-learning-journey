//Write a Function to Reverse an Integer
#include<iostream>
using namespace std;
int reverseNum(int num){
    int ReverseNum = 0;
    while(num>0){
        int NumRev = num%10;
        num /= 10;
        ReverseNum += NumRev;
    }
    return ReverseNum;  

}
int main(){
    cout<<"Reverse of Number: "<<reverseNum(123)<<endl;
    return 0; 
}
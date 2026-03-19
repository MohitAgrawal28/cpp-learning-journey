#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int digitSum = 0;

    while(num>0){
        int lastDig = num%10;
        num /= 10;

        digitSum += lastDig;
    }
    return digitSum;
}
int main(){
    cout<<"Sum of the Digits: "<<sumOfDigits(2356)<<endl;
    return 0;
}
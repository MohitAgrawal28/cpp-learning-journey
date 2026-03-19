#include<iostream>
using namespace std;
int BinToDec(int BinNum){
    int ans=0, power=1;
    while(BinNum>0){
        int rem = BinNum % 10;  
        ans += rem * power;
        BinNum /= 10;
        power *= 2;
    }
    return ans; //Decform
}
int main(){
    cout<<BinToDec(101)<<endl;
}
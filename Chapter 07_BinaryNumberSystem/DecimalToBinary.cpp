#include<iostream>
using namespace std;
int decToBin(int decNum){
    int ans = 0, power = 1;
    while(decNum>0){
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * power);
        power *= 10;
    }
    return ans;
}
int main(){
    for(int i=1;i<11;i++){
    cout<<decToBin(i)<<endl;
    }
    return 0;
}
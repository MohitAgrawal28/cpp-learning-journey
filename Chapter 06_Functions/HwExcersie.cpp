//Calculate sum of Numbers from 1 to n..
#include<iostream>
using namespace std;
int SumOfN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}

int main(){
    cout<<SumOfN(5)<<endl;
    cout<<SumOfN(10)<<endl;
    return 0;
}
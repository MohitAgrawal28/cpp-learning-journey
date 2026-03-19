#include<iostream>
using namespace std;
//Sum of 2 Numbers
int sum(int a, int b){
    int s = a+b;
    return s;
}
//Minimum of 2 Numbers
int min(int a, int b){
    if(a>b){
        return b;
    }
    else{
        return a;
    }
}
int main(){
    cout<<"Addition of 2 Nums: "<<sum(10,5)<<endl;
    cout<<"Minimum of 2 Nums: "<<min(5,3)<<endl;
}
#include<iostream>
using namespace std;
int sum(int a, int b){
    a = a + 10;//15
    b = b + 10;//14
    return a+b;//29
}
//Pass by Value means We created a copy of Argument which is Passed to Function...
int main(){
   int a = 5, b = 4;
   cout<<sum(a,b)<<endl;
   cout<<a<<endl;//Print 5
   cout<<b<<endl;//Print 4 
}
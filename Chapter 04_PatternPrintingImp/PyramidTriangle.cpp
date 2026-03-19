#include<iostream>
using namespace std;
int main(){
    int n = 4;

    for(int i=0;i<n;i++){
        //Spaces...
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        //Number set1: i+1
        for(int j=1;j<=i+1;j++){ 
            cout<<j;
        }
        //Number set2
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}
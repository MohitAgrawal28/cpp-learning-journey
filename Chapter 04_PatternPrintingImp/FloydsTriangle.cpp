#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The Rows : ";
    cin>>n;

    for(int i=1;i<=n;i++){  
        int a = 1;
        for(int j=1;j<=i;j+=2){
            cout<<a<<" ";
            a += 1;
        }
        cout<<endl;
    }
}
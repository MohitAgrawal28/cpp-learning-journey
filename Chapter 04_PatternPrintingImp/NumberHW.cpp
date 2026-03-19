#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Rows: ";
    cin>>n;

    // int m;
    // cout<<"Enter Cols: ";
    // cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
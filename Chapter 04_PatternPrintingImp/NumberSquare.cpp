#include<iostream>
using namespace std;
int main(){
    int n; //ROWS
    cout<<"Enter The Side Of Square : ";
    cin>>n;

    for(int i=1;i<=n;i++){//Yeh wala LOOP *ROWS* ke liye hai
        for(int j=1;j<=i;j++){//Yeh wala LOOP *COLOUMNS* ke liye hai
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
#include<iostream>
using namespace std;
int main(){
    int m; //ROWS
    cout<<"Enter The Number Of Rows: ";
    cin>>m;

    for(int i=1;i<=m;i++){//Yeh wala LOOP *ROWS* ke liye hai
        for(int j=1;j<=m;j++){//Yeh wala LOOP *COLOUMNS* ke liye hai
            cout<<"* ";
        }
        cout<<endl;
    }

}
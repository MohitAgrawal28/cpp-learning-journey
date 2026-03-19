#include<iostream>
using namespace std;
void change(int arr[]){
    arr[0]=901;
}
int  main(){
    int arr[] = {3,4,5};
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    change(arr);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    
    }
}
#include<iostream>
using namespace std;
int main(){
    //Printing the Array;
    int arr[] = {1,4,5,2,3};
    // for(int i=0;i<=4;i++){
    //     cout<<arr[i]<<" ";
    // }
    //Now Printing the Reverse Order of Same Array;
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
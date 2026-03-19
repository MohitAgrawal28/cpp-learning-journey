#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, 7, 1, 9, 4};
    int size = 5;
    int Maximum = INT8_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>Maximum){
            Maximum = arr[i];
        }
    }
    cout<<"Maximum Number in Array: "<<Maximum;
    
}   

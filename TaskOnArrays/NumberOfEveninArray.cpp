#include<iostream>
using namespace std;
int main(){
    int arr[] = {2, 5, 6, 8, 3, 10};
    int ans = 0, size =  6;
    for(int i=0; i < size; i++){
        if(arr[i]%2 == 0){
            ans++; 
        }
    }
    cout<<"Even Number Present in Array: "<<ans;
}
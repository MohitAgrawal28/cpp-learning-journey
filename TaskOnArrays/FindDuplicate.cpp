#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n){
    int duplicate  = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 2){
            duplicate = arr[i];
        }
    }
    return duplicate;
}
int main(){
    int arr[] =  {1, 2, 3, 4, 3};
    int n = 5;
    cout<<findDuplicate(arr, n);
}
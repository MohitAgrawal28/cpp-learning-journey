#include<iostream>
using namespace std;
int Searching(int arr[], int size, int target){
    for(int i=0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {4, 1, 7, 3};
    int size = 4;
    int target = 7;
    cout<<Searching(arr, size, target)<<endl;
}
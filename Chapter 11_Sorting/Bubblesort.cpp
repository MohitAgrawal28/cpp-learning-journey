#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {10, 1, 9, 7, 14, 80};
    int n = 6;
    cout << "Array Sorted using Bubble Sort: "; 
    bubbleSort(arr, n);
    for(int i=0 ; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
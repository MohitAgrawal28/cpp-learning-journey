#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0; j--){
            if(arr[j] > temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[] = {10, 9, 8, 7, 6, 5};
    int n = 6;
    cout << "Sorted elements using Insertion Sort: ";
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout <<arr[i] <<" ";
    }
}
#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
    //Because the Total no of Rounds are n-1;
    for(int i=0; i<n-1; i++){
        int minIndex = i; // taking first value as min
        for(int j=i+1; j<n; j++){ // 2nd loop for finding min value than first element
            if(arr[j] < arr[minIndex]){
                minIndex = j; // if found then update minIndex with j
            }
        }
        swap(arr[minIndex], arr[i]); //swap here
    }
}
int main(){
    int arr[] = {6, 2, 8, 4, 10};
    int n = 5;
    selectionSort(arr, n);
    cout << "Sorted array using Selection sort is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}

void swapAlt(int arr[], int size){
    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){
    int evenarr[] = {2,4,6,8,10,12};
    int oddarr[] = {1,3,5,7,9};

    swapAlt(oddarr, 5);
    printArr(oddarr, 5);
    cout << endl;
}
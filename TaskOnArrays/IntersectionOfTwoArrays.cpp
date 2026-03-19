#include<iostream>
using namespace std;

void IntersecArr(int arr1[], int arr2[], int size){
    cout << "Intersection of two arrays: ";
    bool found = false;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if (arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }
    if(!found){
        cout << "No common elements";
    }
    cout << endl;
}

int main(){
    int arr1[] = {1,2,4,3,5,6};
    int arr2[] = {2,3,8,7,9,0};
    int size = 6;
    IntersecArr(arr1, arr2, size);
}
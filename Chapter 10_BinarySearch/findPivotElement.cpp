#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int totalSum = 0;
    for(int i=0; i<n; i++){
        totalSum = totalSum + arr[i];
    }
    int leftSum = 0;
    for(int i=0; i<n; i++){
        int rightSum = totalSum - leftSum - arr[i];
        if(leftSum == rightSum){
            return i;
        }
        leftSum += arr[i];
    }
    return -1;
}
int main(){
    int arr[] = {2,1,-1};
    int n = 3;
    cout << "Pivot Element in this Array is : " << findPivot(arr, n) << " ";
}
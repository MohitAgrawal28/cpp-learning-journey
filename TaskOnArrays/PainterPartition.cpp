#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int painters = 1;
    int blocks = 0;
    
    for(int i=0;i<n;i++){
        if(blocks + arr[i] <= mid){
            blocks += arr[i];
        }
        else{
            painters++;
            if(painters > k || arr[i] > mid){
                return false;
            }
            blocks = arr[i];
        }
    }
    return true;
}

int painterPartition(int arr[], int n, int k){
    int start = 0;
    int sumofArr = 0;
    for(int i=0; i<n; i++){
        sumofArr += arr[i];
    }
    int end = sumofArr;
    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(arr, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr[] = {48, 90};
    int n = 2;
    int k = 2;
    cout << "The minimum time to get this job done: " << painterPartition(arr, n, k);
}

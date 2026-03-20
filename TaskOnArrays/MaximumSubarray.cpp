#include<iostream>
#include<climits>
using namespace std;

int maxSubarray(int arr[], int n){
    int currentSum = 0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum = currentSum + arr[i];
        maxSum = max(maxSum, currentSum);
        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}
int main(){
    int arr[] = {-3, -2, -5};
    int n = 3;
    cout << "Maximum Subarray is: " << maxSubarray(arr, n) << " ";
}

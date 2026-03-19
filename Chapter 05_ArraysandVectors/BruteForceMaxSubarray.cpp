//Currently we are Printing the Subarray of an Array;
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    int maxSum = 0;
    for(int start=0; start<n; start++){
        int currentSum = 0;
        for(int end=start; end<n; end++){
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout<< "Maximum Subarray Value: "<<maxSum;
}
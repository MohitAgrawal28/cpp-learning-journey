#include<iostream>
using namespace std;

int peakIdxinMtnArr(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end){
        int mid = start + (end - start) / 2; //Finding Mid
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return start;
}
int main(){
    int arr[] = {1, 2, 3, 4, 2, 1};

    cout << "Peak Index in Mountain array is: " << peakIdxinMtnArr(arr, 6) << endl;

}   
#include<iostream>
#include<vector>
using namespace std;
int binarySearch2(vector<int> arr, int key){
    int start  = 0, end = arr.size()-1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] > key){
            end = mid - 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {10,12,14,16,20};
    int key = 10;
    int evenIdx = binarySearch2(arr, key);
    cout << "The Eventarget lies in: " << evenIdx << endl;
    vector<int> arr2 = {2,4,6,8,10};
    int oddIdx = binarySearch2(arr2, key);
    cout << "The Oddtarget lies in: " << oddIdx << endl;
}
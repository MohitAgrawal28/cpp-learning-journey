#include<iostream>
#include<vector>
using namespace std;

int findFirst(vector<int>& arr, int key){
    int start = 0, end = arr.size() - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){    
            ans = mid;
            end = mid - 1; // go left
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int>& arr, int key){
    int start = 0, end = arr.size() - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1; // go right
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {0,0,1,1,2,2,2,2};
    int key = 2;

    int first = findFirst(arr, key);
    int last = findLast(arr, key);
    int totalnoOfOcc = (last - first) + 1;
    cout << "First: " << first << " Last: " << last << endl << "Total No Of Occurences:  " << totalnoOfOcc;
}
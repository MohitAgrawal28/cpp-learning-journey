#include<iostream>
#include<vector>
using namespace std;

void revArray(vector<int>& arr, int m){
    int start = m+1;
    int end = arr.size()-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr = {10, 9, 2, 3, 4, 0};
    int m = 3;
    cout << "Reversed array: ";
    revArray(arr, m);
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] <<" ";
    }

}

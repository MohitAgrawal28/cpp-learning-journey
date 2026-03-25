#include<iostream>
using namespace std;
#include<vector>
void rotateArrbyK(vector<int>& arr, int n, int k){
    vector<int> temp(n);
    for(int i=0; i<n; i++){
        temp[(i+k) %n ] = arr[i];
    }
    arr = temp;
}
int main(){
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int k = 3;
    int n = arr.size();
    cout << "Array After Rotating by K Position: ";
    rotateArrbyK(arr, n, k);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
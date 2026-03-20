#include<iostream>
#include<climits>
using namespace std;
int SubarraySumEqtoK(int arr[], int n, int k){

    int ans = 0;
    for(int i=0; i<n; i++){
        int cs = 0;
        for(int j=i; j<n; j++){
            cs = cs + arr[j];
            if(cs == k){
            ans = ans + 1;
        }
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,1,1};
    int n = 3;
    int k = 2;
    cout << "Subarray Sum is Equal to k: " << SubarraySumEqtoK(arr, n, k) << endl;
    return 0;
}

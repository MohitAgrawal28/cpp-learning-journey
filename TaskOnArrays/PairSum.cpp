#include<iostream>
#include<vector>
using namespace std;
void pairSum(int arr[], int size, int s){
    vector<pair<int, int>> pairs;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == s){
                int ans1, ans2;
                ans1 = min(arr[i], arr[j]);
                ans2 = max(arr[i], arr[j]);
                pairs.push_back({ans1, ans2});
            }
        }
    }
    for(auto p : pairs){
        cout << p.first << " " << p.second << endl;
    }
}
int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;
    int s = 6;

    pairSum(arr,5,s);
    return 0;
}
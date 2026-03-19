#include<iostream>
using namespace std;
int main(){
    int nums[] = {10, 15, -2, 4, 8, 18};
    int size = 6;
    int smallest = INT8_MAX;

    for(int i=0; i < size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
    }
    cout<<"Smallest: "<< smallest << endl;
}
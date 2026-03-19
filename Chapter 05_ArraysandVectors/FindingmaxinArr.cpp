#include<iostream>
using namespace std;
int main(){
    int nums[] = {10, 15, -2, 4, 8, 18};
    int size = 6;
    int largest = INT8_MIN;

    for(int i=0; i < size; i++){
        if(nums[i]>largest){
            largest = nums[i];
        }
    }
    cout<<"Largest "<< largest << endl;
}
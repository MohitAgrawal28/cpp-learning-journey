#include<iostream>
using namespace std;

int sqrtofX(int x){
    int start = 0, end = x;
    long long int ans = -1;
    while(start <= end){
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        if(square < x){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

int main(){
    int x = 49;
    cout << "The square root of X is: " << sqrtofX(x); 
}
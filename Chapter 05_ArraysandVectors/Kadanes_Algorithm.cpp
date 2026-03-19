#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //Kadane's Algorithm states that if Big Negative Value comes, reset the current sum to 0;
        int currentSum = 0, maxSum = INT16_MIN;
        for(int val : nums){
            currentSum += val;
            maxSum = max(currentSum, maxSum);
            if(currentSum < 0){
                currentSum = 0;
            }
        }
        return maxSum;
    }
};
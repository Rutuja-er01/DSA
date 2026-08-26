#include<iostream>
#include<climits>
#include<vector>
using namespace std;
    int maxSubArray(vector<int>&nums){
        int currSum=0;
        int maxSum=INT_MIN;
        for(int val:nums){
         currSum=currSum+val;
         maxSum=max(maxSum,currSum);
         if(currSum<0){
            currSum=0;
         }
        }
        return maxSum;
    }
    int main(){
        vector<int> nums={1,2,3,4,5,-6,7,8,-9};
        cout<<maxSubArray(nums);
      return 0;
    }

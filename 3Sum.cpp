#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
class solution{
    public:
    vector<vector<int>> threeSum(vector<int>& nums){
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){//tc O(n3)*log(trip) and sp O(unique triplets)
                for(int k=j+1;k<n;k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> trip={nums[i],nums[j],nums[k]};
                    sort(trip.begin(),trip.end());
                    if(s.find(trip)==s.end()){
                        s.insert(trip);
                        ans.push_back(trip);
                    }

                    }
                }
            }
        }
        // Implementation for 3Sum algorithm
        return ans;
    }
};
    int main(){
        vector<int> nums={-1,0,2,1,-1,-4};
        solution s;
        vector<vector<int>> result = s.threeSum(nums);
        return 0;
    
   
}
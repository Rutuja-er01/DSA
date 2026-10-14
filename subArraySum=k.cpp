#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int subarraySum(vector<int>& nums,int k){
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){//starting point
            int sum=0;
            for(int j=i;j<n;j++){//ending
                sum+=nums[j];
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    vector<int> nums={1,3,1,1};
    int k=3;
    solution s;
    int result =s.subarraySum(nums,k);
    cout<<result<<endl;
    return 0;
}
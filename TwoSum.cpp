#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
    class solution{
        public:
        vector<int> twoSum(vector<int>& arr,int target){
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int first=arr[i];
          int sec=target-first;
          if(m.find(sec)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
          }
        m[first]=i;
    }
    return ans;
}
};
    int main(){
        vector<int>arr={1,4,3,2,5,7,8,9};
        solution S;
        vector<int>ans=S.twoSum(arr,6);
        cout<<ans[0]<<" "<<ans[1];
        return 0;
        
}


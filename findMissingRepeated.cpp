#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int> findMissingRepeated(vector<vector<int>>& grid){
        vector<int>ans;
        unordered_set<int> s;
        int n=grid.size();
        int a,b;
        int expSum=0,actualSum=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualSum += grid[i][j];
                if(s.find(grid[i][j])!=s.end()){
                a=grid[i][j];
                ans.push_back(a);
                break;
                }
            s.insert(grid[i][j]);
        }
    }
    expSum=(n*n)*(n*n+1)/2;
    b=expSum+a-actualSum;
    ans.push_back(b);
    return ans;
}
};//O(n^2) time complexity and O(n^2) space complexity
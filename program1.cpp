#include<iostream>
#include<queue>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<int,int>> vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end());
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
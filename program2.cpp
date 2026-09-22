#include<iostream>
#include<queue>
#include<map>
#include<unordered_set>
#include<unordered_map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int,int>p1,pair<int ,int>p2){
    if(p1.second<p2.second)
    return true;
    else return false;
}
int main(){
    vector<pair<int,int>> vec={{3,1},{2,1},{7,1},{5,2}};
    sort(vec.begin(),vec.end(),comparator);
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}
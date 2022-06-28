#include<bits/stdc++.h>
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    unordered_map<int,int> mp;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minq;
    for(auto it = mp.begin();it != mp.end();it++){
        minq.push({it->second,it->first});
        if(minq.size()>k){
            minq.pop();
        }
    }
    while(minq.size() != 0){
        ans.push_back(minq.top().second);
        minq.pop();
    }
    sort(ans.begin(),ans.end());
    return ans;
}

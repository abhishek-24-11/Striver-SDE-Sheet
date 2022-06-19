#include <bits/stdc++.h> 

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    vector<int>ans;
    map<int,int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto ak:mp){
        if(ak.second>n/3){
            ans.push_back(ak.first);// ak.first;
        }
        
            
    }
    return ans;
}

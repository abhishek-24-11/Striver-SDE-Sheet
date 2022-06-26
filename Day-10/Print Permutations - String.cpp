#include<bits/stdc++.h>
void solve(string &ds,string&s,vector<string> &ans,int freq[]){
    if(ds.size() == s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i = 0;i<s.size();i++){
        if(!freq[i]){
            freq[i] = 1;
            ds.push_back(s[i]);
            solve(ds,s,ans,freq);
            freq[i] = 0;
            ds.pop_back();
        }
    }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;
    string ds = "";
    //vector<vector<string>> ans;
    int freq[s.size()];
    for(int i = 0;i<s.size();i++){
        freq[i] = 0;
    }
    solve(ds,s,ans,freq);
    return ans;
}

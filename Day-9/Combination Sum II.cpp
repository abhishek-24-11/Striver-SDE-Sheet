
#include<bits/stdc++.h>
void solve(int ind,int target,int n,vector<int>&arr,vector<int> &ds,vector<vector<int>>& ans){
    if(ind == n){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
    }
    if(arr[ind]<=target){
        ds.push_back(arr[ind]);
        solve(ind+1,target-arr[ind],n,arr,ds,ans);
        ds.pop_back();
    }
    while(ind+1<n && arr[ind]== arr[ind+1]) ind++;
    solve(ind+1,target,n,arr,ds,ans);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0,target,n,arr,ds,ans);
    sort(ans.begin(),ans.end());
    //set<int,int>
    return ans;
}

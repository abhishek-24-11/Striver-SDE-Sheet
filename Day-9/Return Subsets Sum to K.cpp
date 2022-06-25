#include<bits/stdc++.h>
void solve(int ind,vector<int> &arr,int target,vector<int> &ds,vector<vector<int>> &ans){
    if(ind == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return;
        //return;
    }
    //pick Condition
   /* if(arr[ind]<target)*/else{
        ds.push_back(arr[ind]);
        solve(ind+1,arr,target-arr[ind],ds,ans);
        ds.pop_back();
        
    }
    solve(ind+1,arr,target,ds,ans);
    //Not Pick Condition
    
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> ds;
    solve(0,arr,k,ds,ans);
    return ans;
       
}

#include<bits/stdc++.h>
int solve(int ind, int prev_ind, int arr[], int n, vector<vector<int>> &dp){
    if(ind == n) return 0;
    if(dp[ind][prev_ind+1] != -1) return dp[ind][prev_ind+1];
    int len = 0 + solve(ind+1,prev_ind,arr,n,dp);
    if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
        len = max(len, 1+solve(ind+1,ind,arr,n,dp));
    }
    return dp[ind][prev_ind+1] = len;
}
int longestIncreasingSubsequence(int arr[], int n)
{
    // Write Your Code here
//     vector<vector<int>> dp(n+1,vector<int>(n+1,0));
//     vector<int> next(n+1,0);
//     vector<int> curr(n+1,0);
//     for(int ind = n-1; ind >= 0; ind--){
//         for(int prev_ind = ind-1; prev_ind >= -1; prev_ind--){
//             int len = 0 + next[prev_ind+1];//,arr,n,dp);
//             if(prev_ind == -1 || arr[ind] > arr[prev_ind]){
//                 len = max(len, 1+next[ind+1]);//,arr,n,dp));
//             }
//             curr[prev_ind+1] = len;
//         }
//         next = curr;
//     }
//      return next[-1+1];
    vector<int> temp;
    temp.push_back(arr[0]);
    int len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>temp.back()){
            temp.push_back(arr[i]);
            len++;
        }else{
            int ind=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
            temp[ind]=arr[i];
        }
    }
    return len;
}

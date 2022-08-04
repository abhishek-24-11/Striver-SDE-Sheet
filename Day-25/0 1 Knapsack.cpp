#include<bits/stdc++.h>
int f(int ind, int W, vector<int> &w, vector<int> &val, vector<vector<int>> &dp){
    if(ind == 0){
        if(W >= w[0]){
        return val[0];
    }
    return 0;
    }
    if(dp[ind][W] != -1) return dp[ind][W];
    int notTake = 0 + f(ind-1,W,w,val,dp);
    int Take = INT_MIN;
    if(W >= w[ind]){
        Take = val[ind] + f(ind-1, W-w[ind],w,val,dp);
    }
    return dp[ind][W] = max(notTake,Take);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
    vector<vector<int>> dp(n,vector<int>(w+1,-1));
    return f(n-1,w,weights,values,dp);
    
}

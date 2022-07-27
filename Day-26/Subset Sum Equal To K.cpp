bool fun(int ind,int k,vector<int> &arr,vector<vector<int>> &dp){
    if(k == 0) return true;
    if(ind == 0) return (arr[0] == k);
    if(dp[ind][k] != -1) return dp[ind][k];
    bool notTake = fun(ind-1,k,arr,dp);
    bool take = false;
    if(arr[ind]<=k) take = fun(ind-1,k-arr[ind],arr,dp);
    return dp[ind][k] = take|notTake;
   // bool take = fun(ind-1,k-arr[ind],arr);
    //bool notTake = fun(ind-1,k - arr[ind],arr);
}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    // Write your code here.
    //vector<vector<int>> dp(n,vector<int>(k+1,-1));
    //vector<vector<bool>> dp(n,vector<bool>(k+1,0));
    vector<bool> prev(k+1,0),curr(k+1,0);
    prev[0] = curr[0] = true;
    prev[arr[0]] = true;
//     for(int i = 0; i< n;i++) dp[i][0] = true;
//     dp[0][arr[0]] = true;
    for(int ind = 1;ind<n;ind++){
        for(int target = 1;target<=k;target++){
             bool notTake = prev[target];
             bool take = false;
              if(arr[ind]<=target) take = prev[target-arr[ind]];
               curr[target] = take|notTake;
        }
        prev = curr;
    }
   return prev[k];
}

int f(int i,int j,int m,int n){
    if(i>=m || j>=n){
        return 0;
    }
    if(i == m-1 && j == n-1){
        return 1;
    }
    return f(i+1,j,m,n) + f(i,j+1,m,n);
}
int fun(int i, int j,vector<vector<int>> &dp){
    if(i == 0 && j == 0) return 1;
    if(i < 0 || j < 0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    
    int up = fun(i-1,j,dp);
    int left = fun(i ,j-1,dp);
    return dp[i][j] = up + left;
}
int uniquePaths(int m, int n) {
	// Write your code here.
    return f(0,0,m,n);
//     vector<vector<int>> dp(m,vector<int>(n,-1));
//    // int dp[16][16]={-1};
// //memset(dp,-1,sizeof dp);
//     return fun(m-1, n-1,dp);
    //int dp[m][n];
//     vector<int> prev(n,0);
//     for(int i = 0;i<m;i++){
//        vector<int> curr(n,0);
//         for(int j = 0;j<n;j++){
//             if(i == 0 && j == 0)  curr[j] = 1;
//             else{
//                 int up = 0;
//                 int left = 0;
//             if(i > 0) up = prev[j];
//             if(j > 0) left = curr[j-1];
//           curr[j] = up + left;
//             }
            
//             }
//         prev = curr;
        
//     }
//     return prev[n-1];
}

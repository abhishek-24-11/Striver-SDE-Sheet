#include<bits/stdc++.h>
string longestPalinSubstring(string s)
{
    // Write your code here.
//     int n = str.size();
//     int dp[n][n];
//     int ans = 1;
//     int sz = 0;
//     memset(dp,0,sizeof(dp));
//     for(int i = 0;i<n;i++){
//         dp[i][i] = 1;
//     }
//     for(int i = 0;i<n-1;i++){
//         if(str[i] == str[i+1]){
//             dp[i][i+1] = 1;
//             ans = 2;
//             sz = i;
//         }
//     }
//     for(int k = 3;k<=n;k++){
//             for(int i = 0;i<n-k+1;i++){
//                 int j = i+k-1;
//                 if(str[i] == str[j] && dp[i+1][j-1] == 1){
//                     dp[i][j] = 1;
//                     if(k>ans){
//                         ans = k;
//                         sz = i;
//                     }
//                 }
                
//             }
//         }
//         string st = "";
//         for(int i = sz;i<=sz+ans-1;++i)
//         {
//             st += str[i];
//         }
//         return st;
     int n = s.size();
    int count = 0;
    int t = 0;
    string ans;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < (n - i); ++j)
        {
            if (i == 0)
                t = 1;

            else if (i == 1 and s[j] == s[j + 1])
                t = 1;

            else if (i > 1 and s[j] == s[j + i])
                t = dp[j + 1][j + i - 1];

            else
                t = 0;

            dp[j][j + i] = t;

            if (t and (count < (i + 1)))
            {
                count =i + 1;
                ans = s.substr(j, count);
            }
        }

    return ans;
}

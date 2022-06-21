#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    vector<int> mp(256,-1);
    int left = 0;
    int right = 0;
    int len = 0;
    int n = input.size();
    while(right<n){
        if(mp[input[right]] != -1){
            left = max(left,mp[input[right]]+1);
        }
        mp[input[right]] = right;
        len = max(len,right-left+1);
        right++;
    }
    return len;
}

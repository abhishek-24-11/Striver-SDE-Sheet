#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    vector<vector<int>>ans;
    for(int i = 0;i<arr.size()-1;i++){
        for(int j  = i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == s){
                ans.push_back(vector<int>{min(arr[i],arr[j]),max(arr[i],arr[j])});
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

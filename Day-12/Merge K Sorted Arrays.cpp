#include<bits/stdc++.h>
//#define minh priority_queue<int,vector<int>,greater<int>>;
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    //Naive Approach Solution or Brute Force Solution
//     vector<int> ans;
//     for(int i = 0;i<kArrays.size();i++){
//         for(int j = 0; j<kArrays[i].size();j++){
//             ans.push_back(kArrays[i][j]);
//         }
//     }
//     sort(ans.begin(),ans.end());
//     return ans;
    //Efficient Solution
    priority_queue<int,vector<int>,greater<int>> minh;
    for(int i = 0;i<kArrays.size();i++){
        for(int j = 0;j<kArrays[i].size();j++){
            minh.push(kArrays[i][j]);
        }
    }
    vector<int> ans;
    while(minh.size() != 0){
        ans.push_back(minh.top());
        minh.pop();
    }
    return ans;
   
}

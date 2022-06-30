#include<bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // Write your code here.
    //Brute Force Solution
//     vector<int>ans(n,-1);
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i] > arr[j]){
//                 ans[i] = arr[j];//push_back(arr[j]);
//                 break;
//             }
            
//         }
        
//     }
//     return ans;
    //Try to Optimise my Code
    vector<int> ans;
    stack<int> s;
    for(int i = n-1;i>=0;i--){
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top()<arr[i]){
            ans.push_back(s.top());
        }
        else if(s.size() > 0 && s.top() >= arr[i]){
            while(s.size() >0 && s.top() >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

#include<bits/stdc++.h>
using namespace std;
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.
    //Brute Force Solution
//     vector<int> ans;
//     for(int i = 0;i<=nums.size()-k;i++){
//         int maxi = nums[i];
//         for(int j = i;j<=i+k-1;j++){
//             maxi = max(maxi,nums[j]);
//         }
//         ans.push_back(maxi);
//     }
//     return ans;
    //Optimal Solution
    deque<int> dq;
    vector<int> ans;
    for(int i = 0;i<nums.size();i++){
        if(!dq.empty() && dq.front() == i-k){
            dq.pop_front();
        }
        while(!dq.empty() && nums[dq.back()]<nums[i]){
            dq.pop_back();
        }
        dq.push_back(i);
        if(i>=k-1){
            ans.push_back(nums[dq.front()]);
        }
    }
    return ans;
}

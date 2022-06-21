#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
//     set<int> s;
//     for(auto ak:arr){
//         s.insert(ak);
//     }
//     int ls = 0;
//     for(auto ak:arr){
//         if(!s.count(ak-1)){
//             int currNum = ak;
//             int currStreak = 1;
//             while(s.count(currNum+1)){
//                 currNum += 1;
//                 currStreak += 1;
//             }
//             ls = max(ls,currStreak);
//         }
         
//     }
//     return ls;
    //Optimal Solution
    int len = 0;
    int longestStreak = INT_MIN;
    if(n == 0){
        return 0;
    }
    unordered_map<int,int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto ak:arr){
        if(mp.find(ak-1) == mp.end()){
            int k = ak;
            int len = 1;
            while(mp.find(k+1) != mp.end()){
                k++;
                len++;
            }
            longestStreak = max(longestStreak,len);
        }
    }
    if(longestStreak > 0){
        return longestStreak;
    }
    return 1;
}

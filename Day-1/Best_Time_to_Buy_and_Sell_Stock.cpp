#include <bits/stdc++.h> 
int maximumProfit(vector<int> &p){
    // Write your code here.
    int mini = INT_MAX;
    int pro = 0;
    for(int i = 0;i<p.size();i++){
        mini = min(mini,p[i]);
        pro = max(pro,p[i] - mini);
    }
    return pro;
//     int maxi = 0;
//     for(int i = 0;i<p.size()-1;i++){
//         for(int j = i+1;j<p.size();j++){
//             if(p[j]-p[i]>0){
//                 maxi = max(maxi,(p[j]-p[i]));
//             }
//         }
//     }
//     return maxi;
}

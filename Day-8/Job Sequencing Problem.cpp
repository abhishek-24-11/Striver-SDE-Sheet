#include<bits/stdc++.h>
struct job{
    int dead;
    int pro;
};
bool static comp(struct job j1,job j2){
    return j1.pro > j2.pro;
}
int jobScheduling(vector<vector<int>> &jobs)
{
    // Write your code here
    int n = jobs.size();
    struct job arr[n];
    for(int i = 0;i < n;i++){
        arr[i].dead = jobs[i][0];
        arr[i].pro = jobs[i][1];
    }
    sort(arr,arr+n,comp);
    int maxi = arr[0].dead;
    for(int i = 1;i<n;i++){
        maxi = max(maxi,arr[i].dead);
    }
    int slot[maxi+1];
    for(int i = 0;i<=maxi;i++){
        slot[i] = -1;
    }
    int countJobs=0,jobProfit=0;
    for(int i = 0;i<n;i++){
        for(int j = arr[i].dead;j>0;j--){
            if(slot[j] == -1){
                countJobs++;
                slot[j] = 151511515155151515151515;
                jobProfit += arr[i].pro;
                 break; 
            }
        }
    }
    return jobProfit;
    
    
}

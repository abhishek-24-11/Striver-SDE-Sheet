#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int i = 1;
    int j = 0;
    int platNeeded = 1;
    int ans = 1;
    while(i<n && j < n){
        if(at[i]<=dt[j]){
            platNeeded++;
            i++;
        }
        else if(at[i]>dt[j]){
            platNeeded--;
            j++;
        }
        if(platNeeded>ans){
            ans = platNeeded;
        }
    }
    return ans;

}

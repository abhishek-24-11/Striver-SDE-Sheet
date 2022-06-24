#include<bits/stdc++.h>
struct meet{
    int s;
    int e;
};
bool com(struct meet a,meet b){
    return (a.e < b.e);
}
int maximumActivities(vector<int> &start, vector<int> &finish) {
    // Write your code here.
    int n = start.size();
    struct meet arr[n];
    for(int i = 0;i<n;i++){
        arr[i].s = start[i];
        arr[i].e = finish[i];
    }
    sort(arr,arr+n,com);
    vector<int> ans;
    int limit = arr[0].e;
    ans.push_back(arr[0].e);
    for(int i = 1;i<n;i++){
        if(arr[i].s>=limit){
            limit = arr[i].e;
            ans.push_back(arr[i].e);
        }
    }
    return ans.size();
}

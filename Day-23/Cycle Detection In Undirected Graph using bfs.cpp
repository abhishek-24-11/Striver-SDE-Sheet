#include<bits/stdc++.h>
bool CycleDetect(int node,vector<int> adj[], vector<int>&vis){
    queue<pair<int,int>>q;
    vis[node] = 1;
    q.push({node,-1});
    while(!q.empty()){
        int nod = q.front().first;
        int par = q.front().second;
        q.pop();
        for(auto it:adj[nod]){
            if(!vis[it]){
                vis[it] = 1;
                q.push({it,nod});
            }
            else if(par != it){
                return true;
            }
        }
    }
    return false;
}
string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    // Write your code here.]
    vector<int> adj[n+1];
    for(int i = 0;i<m;i++){
        adj[edges[i][0]].push_back(edges[i][1]);
        adj[edges[i][1]].push_back(edges[i][0]);
    }
    vector<int> vis(n+1,0);
    for(int i = 1; i<=n; i++){
        if(!vis[i]){
            if(CycleDetect(i,adj,vis)){
                return "Yes";
            }
        }
    }
    return "No";
}

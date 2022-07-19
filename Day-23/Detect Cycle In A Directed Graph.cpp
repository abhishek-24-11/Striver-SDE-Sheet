#include<bits/stdc++.h>
bool isCycle(int node,vector<int>&vis, vector<int> &dfsvis, vector<int> adj[]){
    vis[node] = 1;
    dfsvis[node] = 1;
    for(int it:adj[node]){
        if(!vis[it]){
            if(isCycle(it,vis,dfsvis,adj)) return true;
        }
         else if(dfsvis[it]) return true;
        
    }
    dfsvis[node] = 0;
    return false;
}
int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  // Write your code here.
    vector<int> adj[n+1];
    for(int i = 0;i<edges.size(); i++){
        adj[edges[i].first].push_back(edges[i].second);
        
    }
    vector<int> vis(n+1,0);
    vector<int> dfsvis(n+1,0);
    for(int i = 0; i<n; i++){
        if(vis[i] == 0){
            if(isCycle(i,vis,dfsvis,adj)) return 1;
        }
    }
    return 0;
}

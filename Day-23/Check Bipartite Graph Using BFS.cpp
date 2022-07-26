#include<bits/stdc++.h>
using namespace std;
bool bipartiteBfs(int src, vector<int> adj[], vector<int> &color){
    queue<int> q;
    q.push(src);
    //color[src] = 1;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(color[it] == -1){
                color[it] = 1 - color[node];
                q.push(it);
            }
            else if(color[it] == color[node]){
                return false;
            }
        }
    }
    return true;
}
bool isGraphBirpatite(vector<vector<int>> &edges) {
	// Write your code here.
    vector<int> adj[edges.size()];
    for(int i = 0; i<edges.size(); i++){
        for(int j = 0; j<edges.size(); j++){
            if(edges[i][j] == 1){
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }

    }
    vector<int>color(edges.size(), -1);
    for(int i = 0; i<edges.size(); i++){
        if(color[i] == -1){
            color[i] = 1;
            if(!bipartiteBfs(i,adj,color)){
                return false;
            }
        } 
    }
    return true;
}

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    // Write your code here.
    vector<int> dis(n+1,1e9);
    dis[src] = 0;
    for(int i = 0; i<= n; i++){
        for(auto it:edges){
            if(dis[it[0]] != 1e9 && dis[it[0]] + it[2] < dis[it[1]]){
                dis[it[1]] = dis[it[0]] + it[2];
            }
        }
    }
    return dis[dest];
    //for(auto it:edges)
}

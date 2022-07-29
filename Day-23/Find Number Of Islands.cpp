#include<bits/stdc++.h>
void dfs(int x, int y, int n, int m,int** grid){
    if(x<0 || y<0 || x>=n || y>=m || grid[x][y] != 1){
        return;
    }
    grid[x][y] = 0;
    dfs(x-1,y,n,m,grid);
    dfs(x+1,y,n,m,grid);
    dfs(x,y-1,n,m,grid);
    dfs(x,y+1,n,m,grid);
    dfs(x-1,y-1,n,m,grid);
    dfs(x-1,y+1,n,m,grid);
    dfs(x+1,y+1,n,m,grid);
    dfs(x+1,y-1,n,m,grid);
}
int getTotalIslands(int** arr, int n, int m)
{
   // Write your code here.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int count_no_islands = 0;
    if(n == 0)
        return 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr[i][j] == 1){
                 
                dfs(i,j,n,m,arr);
               count_no_islands += 1;
            }
        }
    }
    return count_no_islands;
    
}

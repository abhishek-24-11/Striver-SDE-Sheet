#include<bits/stdc++.h>
int getMedian(vector<vector<int>> &matrix)
{
    // Write your code here.
    vector<int> v;
    int low = 0;
    int high = matrix.size() * matrix[0].size();
    for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[0].size();j++){
            v.push_back(matrix[i][j]);
        }
    }
    sort(v.begin(),v.end());
    return v[v.size()/2];
}

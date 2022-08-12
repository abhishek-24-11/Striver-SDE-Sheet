vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    int n = v.size();
    vector<vector<int>> ans;
    for(int i = 0; i < (1<<n); i++){
        vector<int> res;
        for(int j = 0; j < n; j++){
            if(i & (1<<j)){
                res.push_back(v[j]);
            }
        }
        ans.push_back(res);
    }
    return ans;

}

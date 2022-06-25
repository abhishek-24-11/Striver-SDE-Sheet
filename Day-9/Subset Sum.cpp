void solve(int ind ,int sum,vector<int>&ds,vector<int>&arr){
    if(ind == arr.size()){
        ds.push_back(sum);
        return;
    }
    //take recursive call
    solve(ind+1,arr[ind]+sum,ds,arr);
    //Non Take recursive call
    solve(ind+1,sum,ds,arr);
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    vector<int> ds;
    solve(0,0,ds,num);
    sort(ds.begin(),ds.end());
    return ds;
    
}

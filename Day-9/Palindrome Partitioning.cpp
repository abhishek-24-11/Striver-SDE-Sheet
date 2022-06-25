bool isPal(string &a,int start,int end){
    while(start<=end){
        if(a[start] != a[end]){
            return false;
           
        }
         start++;
            end--;
    }
    return true;
}
void solve(int ind,string &s,vector<vector<string>>&ans,vector<string> &ds){
    if(ind == s.size()){
        ans.push_back(ds);
        return;
    }
    for(int i = ind;i<s.size();i++){
        if(isPal(s,ind,i)){
            ds.push_back(s.substr(ind,i-ind+1));
            solve(i+1,s,ans,ds);
            ds.pop_back();
        }
        
    }
}
vector<vector<string>> partition(string &s) 
{
    // Write your code here.
    vector<vector<string>>  ans;
    vector<string> ds;
    solve(0,s,ans,ds);
    return ans;
}

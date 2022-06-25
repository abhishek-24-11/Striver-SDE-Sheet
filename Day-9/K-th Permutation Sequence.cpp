#include<bits/stdc++.h>
void solve(int index,vector<string>&ans,string &s){
    if(index>=s.size()){
        ans.push_back(s);
        return;
    }
    
    for(int i=index;i<s.size();i++){
        swap(s[index],s[i]);
        solve(index+1,ans,s);
        swap(s[index],s[i]);
    }
}

string kthPermutation(int n, int k) {
    // Write your code here.
//     vector<string>ans;
//     string s;
//     for(int i=1;i<=n;i++){
//         s.push_back(i + '0');
//     }
//     solve(0,ans,s);
    
//     sort(ans.begin(),ans.end());
    
//     auto out= ans.begin()+(k-1);
//     return *out;
    vector<int>arr;
    string ans="";
    int fact=1;
    
    for(int i=1;i<n;i++){
        fact=fact*i;
        arr.push_back(i);
    }
    arr.push_back(n);
    k=k-1;
    
    while(true){
        ans=ans+to_string(arr[k/fact]);
        arr.erase(arr.begin()+k/fact);
        if(arr.size()==0){
            break;
        }
        k=k%fact;
        fact=fact/arr.size();
    }
    return ans;
}

#include<bits/stdc++.h>
vector<int> findSpans(vector<int> &price) {
    // Write your code here.
    stack<pair<int,int>> s;
    vector<int> ans;
    for(int i = 0;i<price.size();i++)
    {
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first>price[i]){
            ans.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first <= price[i]){
            while(s.size() > 0 && s.top().first <= price[i]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({price[i],i});
    }
    for(int i = 0;i < ans.size() ;i++){
        ans[i] = i - ans[i];
    }
    return ans;
}

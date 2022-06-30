#include<bits/stdc++.h>
using namespace std;
vector<int> Nsl(vector<int> &arr){
    vector<int> ans;
    stack<pair<int,int>> s;
    for(int i = 0;i<arr.size();i++){
        if(s.size() == 0){
            ans.push_back(-1);
        }
        else if(s.size() > 0 && s.top().first < arr[i]){
            ans.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= arr[i]){
            while(s.size() > 0 && s.top().first >= arr[i]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(-1);
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    return ans;
}
vector<int> Nsr(vector<int> &ar){
    stack<pair<int,int>> s;
    vector<int> ans;
    for(int i = ar.size()-1;i >= 0;i--){
        if(s.size() == 0){
            ans.push_back(ar.size());
        }
        else if(s.size() > 0 && s.top().first < ar[i]){
            ans.push_back(s.top().second);
        }
        else if(s.size() > 0 && s.top().first >= ar[i]){
            while(s.size() > 0 && s.top().first >= ar[i]){
                s.pop();
            }
            if(s.size() == 0){
                ans.push_back(ar.size());
            }
            else{
                ans.push_back(s.top().second);
            }
        }
        s.push({ar[i],i});
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int largestRectangle(vector < int > & a) {
   // Write your code here.
     vector<int> NSL = Nsl(a);
     vector<int> NSR = Nsr(a);
    vector<int> width(a.size());
    vector<int> area(a.size());
    int maxi = INT_MIN;
    for(int  i = 0;i<a.size();i++){
        width[i] = NSR[i] - NSL[i] - 1; 
        area[i] = width[i] * a[i];
        maxi = max(maxi,area[i]);
    }
    return maxi;
    
 }

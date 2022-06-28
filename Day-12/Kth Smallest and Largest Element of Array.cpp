#include<bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
	// Write your code here.
    vector<int> ans;
    priority_queue<int> pq;
    for(int i = 0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    ans.push_back(pq.top());
    priority_queue <int, vector<int>, greater<int> > pqm;
    for(int i = 0;i<n;i++){
        pqm.push(arr[i]);
        if(pqm.size()>k){
            pqm.pop();
        }
    }
    ans.push_back(pqm.top());
    return ans;
    
}

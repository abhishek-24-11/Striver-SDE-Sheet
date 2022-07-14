#include<bits/stdc++.h>
vector<int> findMedian(vector<int> &arr, int n){
	
	// Write your code here 
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    vector<int>ans;
    for(int i = 0;i<n;i++){
        if(i%2 == 0){
            minHeap.push(arr[i]);
            maxHeap.push(minHeap.top());
            minHeap.pop();
            ans.push_back(maxHeap.top());
        }
        else{
            maxHeap.push(arr[i]);
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            int res = (minHeap.top() + maxHeap.top())/2;
            ans.push_back(res);
        }
    }
    return ans;
        
    
}

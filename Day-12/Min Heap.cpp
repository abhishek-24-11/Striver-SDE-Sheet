#include<bits/stdc++.h>
class Heap{
    int arr[100000];
    int size;
    public:
    Heap(){
        arr[0] = -1;
        size = 0;
    }
    public:
    void push(int val){
        size++;
        int ind = size;
        arr[ind] = val;
        while(ind>1){
            int par = ind/2;
            if(arr[par] <  arr[ind]){
                swap(arr[par],arr[ind]);
                ind = par;
            }
            else{
                return;
            }
        }
    }
    public:
    int pop(){
        if(size == 0) return -1;
        int del = arr[1];
        arr[1] = arr[size];
        size--;
        int i = 1;
        while(i<=size){
            int leftind = 2*i;
            int rightind = 2*i+1;
            int smaller = i;
            if(leftind <= size && arr[leftind] < arr[smaller]){
                smaller = rightind;
            }
            if(i == smaller) break;
            swap(arr[i],arr[smaller]);
            i = smaller;
        }
        return del;
    }
};
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    Heap minheap;
    vector<int> ans;
    for(auto it : q){
        if(it[0] == 0){
            minheap.push(it[1]);
        }
        else{
            ans.push_back(minheap.pop());
        }
    }
    return ans;
}

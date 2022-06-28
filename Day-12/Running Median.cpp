#include<bits/stdc++.h> 
using namespace std;
void findMedian(int *arr, int n)
{
    // Write your code here
//     Brute Force Solution
//     if(n == 0){
//         return;
//     }
//     vector<int> ans;
//     for(int i = 0;i<n;i++){
//         ans.push_back(arr[i]);
//         sort(ans.begin(),ans.end());
//         int median = -1;
//         int mid = ans.size()/2;
//         if(ans.size() % 2 == 0){
//             median = (ans[mid-1] + ans[mid])/2;
//         }
//         else{
//             median = ans[mid];
//         }
//         cout<<median<<" ";
//     }
//     cout<<endl;
    //Optimal Solution
    //using insertion sort technique and applying online algorithm hahahahahah
    if(n == 0)
        return;
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
    maxh.push(arr[0]);
    cout<<arr[0]<<" ";
    int med = arr[0];
    for(int i = 1;i<n;i++){
        int curr = arr[i];
        if(maxh.size()>minh.size()){
            if(curr<med){
                minh.push(maxh.top());
                maxh.pop();
                maxh.push(curr);
            }
            else{
                minh.push(curr);
            }
            med = (maxh.top()+minh.top())/2;
        }
        else if(minh.size() == maxh.size()){
            if(curr<med){
                maxh.push(curr);
                med = maxh.top();
            }
            else{
                minh.push(curr);
                med = minh.top();
            }
        }
        else{
            if(curr<med){
                maxh.push(curr);
            }
            else{
                maxh.push(minh.top());
                minh.pop();
                minh.push(curr);
            }
            med = (maxh.top() + minh.top())/2;
        }
        cout<<med<<" ";
    }
    cout<<endl;
    
}

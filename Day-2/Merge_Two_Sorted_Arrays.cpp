#include <bits/stdc++.h> 
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
//     vector<int> ans;
//     for(int i = 0;i<m;i++){
//         if(arr1[i]>arr2[0]){
//             swap(arr1[i],arr2[0]);
//             int first = arr2[0];
//             int k;
//             for(k = 1;k<n&&arr2[k]<first;i++){
//                 arr2[k-1] = arr2[k];
//             }
//             arr2[k-1] = first;
//         }
//     }
//     for(int i = 0;i<m;i++){
//         ans.push_back(arr1[i]);
//     }
//     for(int i = 0;i<n;i++){
//         ans.push_back(arr2[i]);
//     }
//     return ans;
    vector<int> ans;
    int i = 0, j = 0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i<m){
        ans.push_back(arr1[i++]);
    }
    while(j<n){
        ans.push_back(arr2[j++]);
    }
    return ans;
}

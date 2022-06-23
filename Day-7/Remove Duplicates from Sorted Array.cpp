#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
//     set<int>s;
//     for(int i = 0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     int ans = s.size();
//     int j = 0;
//     for(int x :s){
//         arr[j] = x;
//         j++;
//     }
//     return ans;
    //Optimal Solution
    int i = 0;
    for(int j = 1;j<n;j++){
        if(arr[j] != arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

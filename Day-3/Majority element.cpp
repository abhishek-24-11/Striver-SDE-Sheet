#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	// Write your code here.
//     int count = 0;
//     int element;
//     for(int i = 0;i<n;i++){
//         if(count == 0){
//             element = arr[i];
//         }
//         if(element == arr[i]){
//             count += 1;
//         }
//         else{
//             count -= 1;
//         }
//     }
//     if(count <= n/2) return -1;
//     return element;
    map<int,int> mp;
    for(int i = 0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto ak:mp){
        if(ak.second>n/2){
            return ak.first;
        }
    }
    return -1;
}

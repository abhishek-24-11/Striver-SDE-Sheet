#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
    //Brute Force Solution
    //vector<vector<int>> ans;
//     for(int i = 0;i<n;i++){
//         for(int j =i+1;j<n;j++){
//             for(int k = j+1;k<n;k++){
//                 if(arr[i] + arr[j] + arr[k] == K){
//                     vector<int> temp;
//                     temp.push_back(arr[i]);
//                     temp.push_back(arr[j]);
//                     temp.push_back(arr[k]);
//                     sort(temp.begin(),temp.end());
//                     if(find(ans.begin(),ans.end(),temp) == ans.end()){
//                         ans.push_back(temp);
//                     }
//                    // ans.push_back(temp);
//                 }
//             }
//         }
//     }
//     return ans;
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    int l,r;
    for(int i = 0 ;i<n;i++){
        l = i+1;
        r = n-1;
        while(l<r){
            if(arr[l]+arr[r] + arr[i] == K){
                ans.push_back({arr[i],arr[l] , arr[r] });
                int x = arr[l];
                int y  = arr[r];
                while(l<r && arr[l] == x){
                    l++;
                }
                while(l<r && arr[r] == y){
                    r--;
                }
            }
            else if(arr[l]+arr[r] + arr[i] > K){
                r--;
            }
            else{
                l++;
            }
        }
        while(i+1<n && arr[i] == arr[i+1]){
            i++;
        } 
    }
    return ans;
}

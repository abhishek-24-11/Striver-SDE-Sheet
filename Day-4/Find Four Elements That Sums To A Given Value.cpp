#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    
//     sort(arr.begin(),arr.end());
//     for(int i = 0;i<=n-3;i++){
//         for(int j = i+1;j<=n-2;j++){
//             for(int k = j+1;k<=n-1;k++){
//                 for(int l = k+1;l<=n-1;l++){
//                     if((arr[i]+arr[j]+arr[k]+arr[l]) == target){
//                         return "Yes";
//                         break;
//                     }
//                 }
                
//             }
            
//         }
//     }
//     return "No";
    //Optimal Solution
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n-3;i++){
        for(int j = i+1;j<n-2;j++ ){
            int sum = target - arr[i] - arr[j];
            int left  = j+1;
            int right = n-1;
            while(left<right){
                if(arr[left] + arr[right] == sum){
                    return "Yes";
                }
                else if(arr[left] + arr[right] < sum){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
    }
    return "No";
}

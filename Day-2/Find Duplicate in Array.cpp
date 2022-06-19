#include <bits/stdc++.h> 
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    //brute force solution 
//     int ans;
//     for(int i = 0;i<n-1;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i] == arr[j]){
//                 ans = arr[i];
//             }
//         }
        
        
//     }
//     return ans;
//     best solution
   /* sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
        if(arr[i] == arr[i+1])
        {
            return arr[i];
            
        }    
    }
    return 0;*/
    // better Solution
//     vector<int> freq(n+1,0);
//     for(int i = 0;i<n;i++){
//         if(freq[arr[i]] == 0){
//             freq[arr[i]] += 1;
//         }
//         else{
//             return arr[i];
//         }
//     }
//     return 0;
//         optimal solution
    int slow = arr[0];
    int fast = arr[0];
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    }
    while(slow != fast);
    fast = arr[0];
    while(fast != slow){
        slow = arr[slow];
        fast = arr[fast];
    }
    return fast;
}

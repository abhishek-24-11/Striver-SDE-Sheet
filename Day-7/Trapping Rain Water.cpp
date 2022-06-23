#include <bits/stdc++.h> 
long getTrappedWater(long *arr, int n){
    // Write your code here.
//     long amtWaterTrapped = 0;
//     for(int i = 0;i<n;i++){
//         int j = i;
//         long leftMax = 0;
//         long rightMax = 0;
//         while(j>=0){
//             leftMax = max(leftMax,arr[j]);
//             j--;
//         }
//         j = i;
//         while(j<n){
//             rightMax = max(rightMax,arr[j]);
//              j++;
//         }
//         amtWaterTrapped += min(leftMax,rightMax) - arr[i];
//     }
//     return amtWaterTrapped;
    long leftMax[n];
    leftMax[0] = arr[0];
    long amtWaterTrapped = 0;
    long rightMax[n];// = 0;
    for(int i = 1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],arr[i]);
    }
    rightMax[n-1] = arr[n-1]; 
    for(int i = n-2;i>=0;i--){
        rightMax[i] = max(rightMax[i+1],arr[i]);
    }
    for(int i = 0;i<n;i++){
        amtWaterTrapped += min(leftMax[i],rightMax[i])-arr[i];
    }
    return amtWaterTrapped;
}

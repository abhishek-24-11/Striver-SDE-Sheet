#include <bits/stdc++.h> 
int m(vector<int> &arr,int left,int mid,int right){
    int count = 0;
    int j = mid+1;
    for(int i = left;i<=mid;i++){
        while(j<=right && arr[i] > 2*arr[j]){
            j++;
        }
        count += (j-(mid+1));
    }
    int low = left,high = mid+1;
    vector<int> temp;
    while(low<=mid && high<= right){
        if(arr[low]<=arr[high]){
            temp.push_back(arr[low++]);
        }else{
            temp.push_back(arr[high++]);
        }
    }
    while(low<=mid){
        temp.push_back(arr[low++]);
    }
    while(high <= right){
        temp.push_back(arr[high++]);
    }
    for(int i = left;i<=right;i++){
        arr[i] = temp[i-left];
    }
    return count;
}
int ms(vector<int> &arr,int left,int right){
    if(left>=right){
        return 0;
    }
    int mid = (left + right)/2;
    int inv = ms(arr,left,mid);
    inv += ms(arr,mid+1,right);
    inv += m(arr,left,mid,right);
    return inv;
}
int reversePairs(vector<int> &arr, int n){
	// Write your code here.
    //Brute Force Solution
   /* int cnt = 0;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>2*arr[j]){
                cnt++;
            }
        }
    }
    return cnt;*/
    //Optimal Solution using Merge Sort and Time Complexity is O(nlogn) + O(n) + O(n) and Time Space Complexity is O(N);
    return ms(arr,0,n-1);
}

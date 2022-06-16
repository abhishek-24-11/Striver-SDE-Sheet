#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    if(n == 0) return 0;
    long long maxi = INT_MIN;
    long long currSum = 0;
    for(int i = 0;i<n;i++){
        currSum += arr[i];
        if(currSum>maxi){
            maxi = currSum;
        }
        if(currSum<0){
            currSum = 0;
        }
    }
    if(maxi < 0){
        return 0;
    }
    
    return maxi;
    
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
}

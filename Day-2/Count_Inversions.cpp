#include <bits/stdc++.h> 
long long ans = 0;
void merge(long long *arr,long long l,long long m,long long r){
     long long n1 = m-l+1, n2 = r-m;
         long long left[n1], right[n2];
         for(long long i = 0; i < n1; i++)
            left[i] = arr[l+i];
         for(long long i = 0; i < n2; i++)
            right[i] = arr[m+i+1];
        
        int i = 0, j = 0, k = l;
        while(i < n1 && j < n2)
        {
            if(left[i] <= right[j])
                arr[k++] = left[i++];
            else
            {
                 arr[k++] = right[j++];
                 ans += (n1-i);
            }
        }
        while(i < n1)
        {
            arr[k++] = left[i++];
        }
        while(j < n2)
        {
            arr[k++] = right[j++];
        }
}
void mergeSort(long long *arr, long long l, long long r)
{
        if(l >= r)
            return;
            
            long long m = (l+r)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m+1, r);
            merge(arr, l, m, r);
}
long long getInversions(long long *arr, int n){
    // Write your code here.
    //Brute Force Solution and give Time Limit Exceeded
   /* int cnt = 0;
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                cnt++;
            }
        }
    }
    
    return cnt++;*/
    //optimal solution
    mergeSort(arr, 0, n-1);
    return ans;
}

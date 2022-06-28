#include<bits/stdc++.h>
int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int n, int m, int k) {
    // Write your code here./\
    //Brute Force Solution;
   // if(m<n)
//     int i = 0;
//     int j = 0;
//     int counter = 0;
//     int ans = 0;
//     while(i<n && j<m){
//         if(counter == k){
//             break;
//         }
//         else if(row1[i]<row2[j]){
//             ans = row1[i];
//             ++i;
                
//         }
//         else{
//             ans = row2[j];
//             ++j;
//         }
//         ++counter;
//     }
//     if(counter != k){
//         if(i != n-1){
//             ans = row1[k-counter];
//         }
//         else{
//             ans = row2[k-counter];
//         }
//     }
//     return ans;
    //Optimal Solution
    if(m<n){
        return ninjaAndLadoos(row2,row1,m,n,k);
    }
    int low = max(0,k-m);
    int high = min(k,n);
    while(low <= high){
        int c1 = (low+high)>>1;
        int c2 = k-c1;
        int l1 = c1 == 0 ? INT_MIN : row1[c1-1]; 
        int l2 = c2 == 0 ? INT_MIN : row2[c2-1];
        int r1 = c1 == n ? INT_MAX : row1[c1];
        int r2 = c2 == m ? INT_MAX : row2[c2];
        if(l1 <= r2 && l2 <= r1){
            return max(l1,l2);
        }
        else if(l1>l2){
            high = c1-1;
        }
        else{
            low = c1+1;
        }
    }
    return 1;
    
}

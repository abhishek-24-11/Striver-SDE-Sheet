#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
    // Write your code here.
    //Brute force Solution
//     for(int i = 0;i<m;i++){
//         for(int j = 0;j<n;j++){
//             if(mat[i][j] == target){
//                 return true;
//             }
//         }
//     }
//     return false;
    //Optimal solution using binary search
    /*for(int i = 0;i<m;i++){
        int left = 0;//mat[i][0];
       // cout<<left<<endl;
        int right = n-1;//mat[i][n-1];
        //cout<<right<<endl;
        while(left <= right){
            int mid = left + (right-left)/2;
            //cout<<mid<<endl;
            if(mat[i][mid] == target){
                return true;
            }
            else if(mat[i][mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
    }
    return false;*/
    //more and more optimal solution
    int left = 0;
    int right = m*n-1;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(mat[mid/n][mid%n] == target){
            return true;
        }
        else if(mat[mid/n][mid%n] < target){
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }
    return false;
}

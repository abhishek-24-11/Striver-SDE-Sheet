#include <bits/stdc++.h> 

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
     //int n = mat.size();
    int r = 0;
    int c = 0;
    int lr = n;
    int lc = m;
    int prev;
    int curr;
    while(r<lr && c<lc){
         if (r + 1 == lr || c + 1 == lc)  break;   
        prev = mat[r + 1][c];  
        for (int i = c; i < lc; i++) 
        { 
            curr = mat[r][i]; 
            mat[r][i] = prev; 
            prev = curr; 
        } 
        r++; 
        //for the last column which is in bounds
        for (int i = r; i < lr; i++) 
        { 
            curr = mat[i][lc-1]; 
            mat[i][lc-1] = prev; 
            prev = curr; 
        } 
        lc--;   
        //for the last row which is in bounds
        if (r < lr) 
        { 
            for (int i = lc-1; i >= c; i--) 
            { 
                curr = mat[lr-1][i]; 
                mat[lr-1][i] = prev; 
                prev = curr; 
            } 
        } 
        lr--; 
        //for the first row which is in bounds
        if (c < lc) 
        { 
            for (int i = lr-1; i >= r; i--) 
            { 
                curr = mat[i][c]; 
                mat[i][c] = prev; 
                prev = curr; 
            } 
        } 
        c++; 
    }
   

}

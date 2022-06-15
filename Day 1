#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &m)
{
	// Write your code here.
    int r = m.size();
    int c = m[0].size();
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(m[i][j] == 0){
                // make -1 of column up element
                int indJ = i-1;
                while(indJ>=0){
                    if(m[indJ][j] != 0){
                        m[indJ][j] = -1;
                    }
                     indJ--;
                }
               
                // make -1 of column down element
                int indJJ = i+1;
                while(indJJ<r){
                    if(m[indJJ][j] != 0){
                        m[indJJ][j] = -1;
                    }
                    indJJ++;
                }
                
                // make -1 row left element and varies column row fix
                int indI = j-1;
                while(indI>=0){
                    if(m[i][indI] != 0){
                        m[i][indI] = -1;
                    }
                    indI--;
                }
                
                int indII = j+1;
                while(indII<c){
                    if(m[i][indII] != 0){
                         m[i][indII] = -1;
                    }
                   indII++;
                }
                
            }
        }
    }
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            if(m[i][j] == -1){
                m[i][j] = 0;
            }
        }
    }
}

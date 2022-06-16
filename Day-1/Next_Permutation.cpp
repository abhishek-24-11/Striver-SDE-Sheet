#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &p, int n)
{
    //  Write your code here.
    int ind1 = -1;
    int ind2;
    if(n == 1){
        return p;
    }
    for(int i = n-2;i>=0;i--){
        if(p[i]<p[i+1]){
            ind1 = i;
            break;
        }
    }
    if(ind1==-1){
        sort(p.begin(),p.end());
        return p;
    }
    for(int i = n-1;i>=0;i--){
        if(p[ind1]<p[i]){
            ind2 = i;
            break;
        }
    }
    swap(p[ind1],p[ind2]);
    reverse(p.begin()+ind1+1,p.end());
                      return p;
    //return next_permutation(p.begin(),p.end());
}

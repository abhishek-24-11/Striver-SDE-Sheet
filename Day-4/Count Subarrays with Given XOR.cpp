#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    map<int,int> mp;
    int cnt = 0;
    int xo = 0;
    for(auto ak:arr){
        xo = xo^ak;
        if(xo == x){
            cnt++;
        }
        if(mp.find(xo^x) != mp.end()){
            cnt += mp[xo^x];
        }
        mp[xo] += 1;
    }
    return cnt;
}

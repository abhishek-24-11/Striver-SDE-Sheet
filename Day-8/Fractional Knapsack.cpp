#include<bits/stdc++.h>

bool comp(pair<int,int> a,pair<int,int>b){
    double d1 = (double) a.second/(double) a.first;
    double d2 = (double) b.second/(double) b.first;
    return d1>d2;
}
double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    sort(items.begin(),items.end(),comp);
    int currWei = 0;
    double currVal = 0.0;
    for(int i  = 0;i<n;i++){
        if(items[i].first + currWei <= w){
            currWei += items[i].first;
            currVal += items[i].second;
        }
        else{
            int rem = w - currWei;
            currVal += ((double) items[i].second/(double) items[i].first)*rem;
            break;
        }
    }
    return currVal;
}

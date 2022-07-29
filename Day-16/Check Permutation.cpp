#include<bits/stdc++.h>
bool areAnagram(string &a, string &b){
    // Write your code here.
    if(a.size() != b.size()) return false;
   map<char,int> mp;
    for(int i = 0; i<a.size(); i++){
        mp[a[i]]++;
    }
    for(int i = 0; i<b.size(); i++){
        if(mp.find(b[i]) != mp.end()){
            mp[b[i]]--;
        }
    }
    for(auto it : mp){
        if(it.second != 0){
            return false;
        }
    }
    return true;
}

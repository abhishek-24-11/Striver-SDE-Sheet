#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    long res = 1;
    long y = x;
    while(n>0){
        if(n%2 != 0 ){
            res = ((res)*(y)%m)%m;
        }
        y = ((y)%m * (y)%m)%m;
        n = n>>1;
    }
    return res;
    
}

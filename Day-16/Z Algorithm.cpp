int zAlgorithm(string s, string p, int n, int m)
{
	// Write your code here
    int occ = 0;
    for(int i = 0;i<n-m+1;i++){
        string p1 = s.substr(i,m);
        if(p1 == p){
            occ++;
        }
    }
    return occ;
}

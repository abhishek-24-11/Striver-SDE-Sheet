int compareVersions(string a, string b) 
{
    // Write your code here
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    while(i<n || j<m){
        long long num1 = 0;
        long long num2 = 0;
        while(i<n && a[i] != '.'){
            num1 = num1 *10 +  1ll * (a[i]-'0');
            i++;
        }
        while(j<m && b[j] != '.'){
            num2 = num2*10 + 1ll * (b[j]-'0');
            j++;
        }
        if(num1 < num2) return -1;
        else if(num1 > num2){
            return 1;
        }
        i++;
        j++;
    }
    return 0;
}

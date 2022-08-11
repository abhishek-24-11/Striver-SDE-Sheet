bool canPlace(int mid,int c,vector<int> positions,int n){
    int nijasPlace = 1;
    int recentPlaceDat = 0;
    for(int i = 1; i<n; i++){
        if(positions[i] - positions[recentPlaceDat] >= mid){
            nijasPlace++;
            recentPlaceDat = i;
        }
       
    }
    if(nijasPlace >= c){
        return true;
    }
    return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	// Write your code here
    sort(positions.begin(), positions.end());
    int left = 0;
    int right = positions[n-1]-positions[0];
    int ans = 0;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(canPlace(mid,c,positions,n)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return ans;
    
}

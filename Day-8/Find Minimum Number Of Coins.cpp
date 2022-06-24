int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int> arr;
     arr = {1,2,5,10,20,50,100,500,1000};
    int n = arr.size();
    vector<int> ans;
    for(int i = n-1;i>=0;i--){
        while(arr[i]<=amount){
            amount -= arr[i];
            ans.push_back(arr[i]);
        }
    }
    return ans.size();
}

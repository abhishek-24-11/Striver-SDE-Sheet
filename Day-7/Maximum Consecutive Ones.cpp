int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.'

    int i = 0;
    int j = 0;
    int cnt0 = 0;
    int ans = 0;
    while(j<n){
        if(arr[j] == 0){
            cnt0++;
        }
        while(cnt0>k){
            if(arr[i] == 0){
                cnt0--;
            }
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
//leetcode Solution by Striver Sde Sheet Link
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 1){
                cnt++;
            }
            
            else{
                cnt = 0;
            }
            ans = max(ans,cnt);
        }
        return ans;
    }
};

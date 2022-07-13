TreeNode<int>*solve(vector<int>& arr,int start,int end){
    if(start > end){
        return NULL;
    }
    int mid = (start + end)/2;
    TreeNode<int>*curr = new TreeNode<int>(arr[mid]);
    curr->left = solve(arr,start,mid-1);
    curr->right = solve(arr,mid+1,end);
    return curr;
}
TreeNode<int>* sortedArrToBST(vector<int> &arr, int n)
{
    // Write your code here.
    if(n == 0) return NULL;
    return solve(arr,0,n-1);
}

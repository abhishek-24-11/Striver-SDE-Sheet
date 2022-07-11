/************************************************************

    Following is the Tree node structure
	
	template <typename T>
    class TreeNode 
    {
        public : 
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) 
        {
            this -> val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
int count;
#define lli long long int
lli solve(TreeNode<int>*node,lli& ans){
    if(node == NULL) return 0;
    if(node->left == NULL && node->right == NULL) count++;
    lli left = solve(node->left,ans);
    lli right = solve(node->right,ans);
    lli temp = max(left,right) + node->val;
    lli maxi = max(temp,left+right+node->val);
    ans = max(ans,maxi);
    return temp;
}
// long long solve(TreeNode<int>* node,long long &maxi){
//     if(node == NULL) return 0;
//     int leftSum = max(0,solve(node->left,maxi));
//     int rightSum = max(0,solve(node->right,maxi));
//     maxi = max(maxi,node->val+leftSum+rightSum);
//     return node->data + max(leftSum,rightSum);
    
        
// }
long long int findMaxSumPath(TreeNode<int> *root)
{
    // Write your code here.
    if(root == NULL) return -1;
    count = 0;
    lli ans = 0;
    solve(root,ans);
    if(count == 1){
        return -1;
    }
    return ans;
//     long long maxi = 0;
//     solve(root,maxi);
//     return maxi;
//    // solve()
}

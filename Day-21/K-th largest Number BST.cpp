void inorder(TreeNode<int>* node,vector<int> &ans){
    if(node == NULL){
        return;
    }
    inorder(node->left,ans);
    ans.push_back(node->data);
    inorder(node->right,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    vector<int> ans;
    inorder(root,ans);
    if(ans.size()<k) return -1;
    return ans[ans.size()-k];
    // Write your code here.
}

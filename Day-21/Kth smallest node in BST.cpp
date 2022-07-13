void inorder(TreeNode<int> *node,vector<int> &ans){
    if(node == NULL){
        return;
    }
    inorder(node->left,ans);
    ans.push_back(node->data);
    inorder(node->right,ans);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    vector<int> ans;
    inorder(root,ans);
    return ans[k-1];
}

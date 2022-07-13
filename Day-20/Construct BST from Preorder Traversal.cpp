TreeNode<int>* createBST(vector<int>&pre,int &ind,int bound){
    if(ind == pre.size() || pre[ind] > bound) return NULL;
    TreeNode<int>* root = new TreeNode<int>(pre[ind++]);
    root->left =  createBST(pre,ind,root->data);
    root->right =  createBST(pre,ind,bound);
    return root;
}
TreeNode<int>* preOrderTree(vector<int> &preOrder){
    // Write your code here.
    int ind = 0;
    return  createBST(preOrder,ind,1e9+7);
}

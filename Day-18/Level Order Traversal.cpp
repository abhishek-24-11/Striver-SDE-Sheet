vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> ans;
    if(root ==   NULL ){
        return ans;
    }
    queue<BinaryTreeNode<int>*> q;
    BinaryTreeNode<int>* node;
    q.push(root);
    while(!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node->val);
        if(node->left != NULL ){
            q.push(node->left);
        }
        if(node->right != NULL){
            q.push(node->right);
        }
        
            
    }
    return ans;
    
}

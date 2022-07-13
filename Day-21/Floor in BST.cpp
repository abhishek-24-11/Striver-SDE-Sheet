int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int floor = -1;
    while(root != NULL){
       if(root->val == X) {
        floor = root->val;
        return floor;
    }
    if(root->val < X){
        floor = root->val;
        root = root->right;
    }
    else{
        root = root->left;
    } 
    }
    
    return floor;
}

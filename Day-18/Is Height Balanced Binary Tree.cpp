/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int dfsHeight(BinaryTreeNode<int>* node){
        if(node == NULL) return 0;
        int leftHeight = dfsHeight(node->left);
        if(leftHeight == -1) return -1;
        int rightHeight = dfsHeight(node->right);
        if(rightHeight == -1  ) return -1;
        if(abs(leftHeight-rightHeight)>1) return -1;
        return 1 + max(leftHeight,rightHeight);
    }
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.
    return dfsHeight(root) != -1;
}

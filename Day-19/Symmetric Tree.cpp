/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/

bool checkIsSymmetric(BinaryTreeNode<int>*left,BinaryTreeNode<int>*right){
    if(left == NULL) return !right;
    if(right == NULL) return !left;
    if(left->data != right->data) return false;
    return checkIsSymmetric(left->left,right->right) && checkIsSymmetric(left->right,right->left);
}
bool isSymmetric(BinaryTreeNode<int>* root)
{
    // Write your code here.  
    if(root == NULL) return true;
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    return checkIsSymmetric(root->left,root->right);
}

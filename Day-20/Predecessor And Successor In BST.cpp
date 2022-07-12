/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/

pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    int pred = -1;
    int succ = -1;
    while(root){
        if(root->data == key){
            break;
        }
        if(root->data > key){
            succ = root->data;
            root = root->left;
            
        }
        else{
            pred = root->data;
            root = root->right;
        }
    }
    BinaryTreeNode<int>* pre = root->left;
    BinaryTreeNode<int> *suc = root->right;
    if(pre){
        pred = pre->data;
        while(pre->right){
            pre = pre->right;
            pred = pre->data;
            
        }
    }
    if(suc){
        succ = suc->data;
        while(suc->left){
            suc = suc->left;
            succ = suc->data;
        }
    }
    return {pred,succ};
}

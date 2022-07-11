/************************************************************

    Following is the TreeNode class structure.

    template <typename T>
    class TreeNode {
        public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int> *node){
    if(node == NULL || node->right==NULL && node->left == NULL) return;
   // TreeNode<int> *prev = NULL;
    if(node->left != NULL){
        solve(node->left);
        TreeNode<int> *temp = node->right;
        node->right = node->left;
        node->left != NULL;
        TreeNode<int> *a = node;
        while(node->right != NULL){
            node= node->right;
        }
        node->right = temp;
        
    }
    solve(node->right);
    //solve(node->left);
//     node->right = prev;
//     node->left = NULL;
//     prev = node;
}
TreeNode<int> *flattenBinaryTree(TreeNode<int> *root)
{
    // Write your code here.
  //  TreeNode<int> *prev = NULL;
    solve(root);
   return root;
}

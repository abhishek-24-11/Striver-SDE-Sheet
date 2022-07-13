TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* p, TreeNode<int>* q)
{
	// Write your code here
    //Recursive Solution
    if(root == NULL) return NULL;
    int curr = root->data;
    if(curr < p->data && curr < q->data){
       return LCAinaBST(root->right,p,q);
    }
    if(curr > p->data && curr > q->data){
        return LCAinaBST(root->left,p,q);
    }
    return root;
    //Iterative Solution
//     while(root){
//         if(root->data > P->data && root->data > Q->data){
//             root = root->left;
//         }
//         else if(root->data < P->data && root->data < Q->data){
//             root = root->right;
//         }
//         else{
//             return root;
//         }
//     }
}

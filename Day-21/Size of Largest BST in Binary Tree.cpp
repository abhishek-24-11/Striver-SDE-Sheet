class NodeVal{
    public:
    int maxNode;
    int minNode;
    int maxSize;
    NodeVal(int minNode,int maxNode,int maxSize){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->maxSize = maxSize;
    }
};
NodeVal largestBSTSubtreeHelper(TreeNode<int>* root){
    if(root == NULL) {
        return NodeVal(INT_MAX,INT_MIN,0);
    }
    auto left = largestBSTSubtreeHelper(root->left);
    auto right = largestBSTSubtreeHelper(root->right);
    if(left.maxNode < root->data && right.minNode > root->data){
        return NodeVal(min(root->data,left.minNode),max(root->data,right.maxNode),left.maxSize + right.maxSize + 1);
    }
    return NodeVal(INT_MIN,INT_MAX,max(left.maxSize,right.maxSize));
}
int largestBST(TreeNode<int>* root) 
{
    // Write your code here.
    return largestBSTSubtreeHelper(root).maxSize;
}

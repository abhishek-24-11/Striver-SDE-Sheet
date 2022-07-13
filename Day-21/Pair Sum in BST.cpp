void inorder(BinaryTreeNode<int> *node,vector<int>&ans){
    if(node == NULL) return;
    inorder(node->left,ans);
    ans.push_back(node->data);
    inorder(node->right,ans);
}
bool pairSumBst(BinaryTreeNode<int> *root, int k)
{
    vector<int> ans;
    inorder(root,ans);
    int start = 0;
    int end = ans.size()-1;
    while(start<= end){
        if(ans[start] + ans[end] == k){
            return true;
        }
        else if(ans[start] + ans[end] < k){
            start++;
        }
        else{
            end--;
        }
    }
    return false;
    // Write your code here
}

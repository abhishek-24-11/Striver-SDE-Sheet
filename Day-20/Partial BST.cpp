#include<bits/stdc++.h>
void inorder(BinaryTreeNode<int> *root,vector<int>&ans){
    if(root){
        inorder(root->left,ans);
        ans.push_back(root->data);
        inorder(root->right,ans);
    }
}
bool validateBST(BinaryTreeNode<int> *root) {
    // Write your code here
    vector<int> ans;
    inorder(root,ans);
    for(int i = 1;i<ans.size();i++){
        if(ans[i] < ans[i-1]){
            return false;
        }
    }
    return true;
}

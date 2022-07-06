/************************************************************

    Following is the Binary Tree node structure:
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
#include<bits/stdc++.h>
bool isLeaf(TreeNode<int> * root) {
  return !root -> left && !root -> right;
}
void LeftBoundary(TreeNode<int>* node,vector<int>&ans){
    TreeNode<int>* curr = node->left;
    while(curr){
        if(!isLeaf(curr)) ans.push_back(curr->data);
        if(curr->left != NULL) curr = curr->left;
        else{
            curr = curr->right;
        }
    }
}

void addRightBoundary(TreeNode<int>*node,vector<int>&ans){
    TreeNode<int>*curr = node->right;
    vector<int> temp;
    while(curr){
        if(!isLeaf(curr)) temp.push_back(curr->data);
        if(curr->right != NULL){
        curr = curr->right;
    }
    else{
        curr = curr->left;
    }
    }
    for(int i = temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
    
}

void addLeaves(TreeNode<int>* node,vector<int> &ans){
    if(isLeaf(node)){
        ans.push_back(node->data);
        return;
    }
    if(node->left) addLeaves(node->left,ans);
    if(node->right) addLeaves(node->right,ans);
}

vector<int> traverseBoundary(TreeNode<int>* root){
   vector<int> ans;
    if(!root){
        return ans;
    }
    if(!isLeaf(root)) ans.push_back(root->data);
    LeftBoundary(root,ans);
    addLeaves(root,ans);
    addRightBoundary(root,ans);
    return ans;
}

    

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
#include<bits/stdc++.h>
vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    
    // Write your code here
    vector<int> ans;
    if(root == NULL){
        return ans;
    }
    queue<BinaryTreeNode<int> *>q;
    q.push(root);
    int  leftToRight = 1;
    while(!q.empty()){
        int size = q.size();
        vector<int> temp;
        for(int i = 0;i<size;i++){
            BinaryTreeNode<int> *node = q.front();
            q.pop();
            temp.push_back(node->data);
            if(node->left != NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
            if(leftToRight%2 == 0){
                reverse(temp.begin(),temp.end());
            }
            for(int i = 0;i<size;i++){
                ans.push_back(temp[i]);
            }
            leftToRight = !leftToRight;
        
        
    }
    return ans;
        
}

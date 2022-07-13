/*
    ----------------- Binary Tree node class for reference -----------------

    template <typename T>
    class BinaryTreeNode {
        public : 
            T data;
            BinaryTreeNode<T> *left;
            BinaryTreeNode<T> *right;
            BinaryTreeNode<T> *next;

            BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
                next = NULL;
            }
    };
*/
#include<bits/stdc++.h>
using namespace std;
void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
    if(root == NULL) return;
    queue<BinaryTreeNode< int > *>q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i = 1;i<=size;i++){
           BinaryTreeNode< int > *temp = q.front();
            q.pop();
            if(i<size) temp->next = q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            
        }
    }
}

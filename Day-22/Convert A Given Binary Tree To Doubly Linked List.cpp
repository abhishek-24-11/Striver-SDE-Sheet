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
using namespace std;
void convertDLL(BinaryTreeNode<int>* root, BinaryTreeNode<int>* &prev ,
    BinaryTreeNode<int>* &head){
    if(root == NULL) return ;
    convertDLL(root->left,prev,head);
    if(prev == NULL) head = root;
    else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    convertDLL(root->right,prev,head);
        
}
BinaryTreeNode<int>* BTtoDLL(BinaryTreeNode<int>* root) {
    // Write your code here
    BinaryTreeNode<int>*prev = NULL;
    BinaryTreeNode<int>*head = NULL;
    convertDLL(root,prev,head);
    return head;
    
}

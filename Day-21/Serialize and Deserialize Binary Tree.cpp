#include<bits/stdc++.h>
string serializeTree(TreeNode<int> *root)
{
    if(root == NULL) return "";
    string s = "";
    queue<TreeNode<int>*> q;
    q.push(root);
    while(!q.empty()){
       TreeNode<int>* curr = q.front();
        q.pop();
        if(curr == NULL ) s.append("#,");
        else{
            s.append(to_string(curr->data)+',');
        }
        if(curr != NULL){
            q.push(curr->left);
            q.push(curr->right);
        }
        
        
    }
    return s;
 //    Write your code here for serializing the tree
//     S = root;
//     string str = "";
//     return "";

}

TreeNode<int>* deserializeTree(string &serialized)
{
 //    Write your code here for deserializing the tree
    if(serialized.size() == 0) return NULL;
    stringstream s(serialized);
    string str;
    getline(s,str,',');
    TreeNode<int>* root = new TreeNode<int>(stoi(str));
    queue<TreeNode<int>*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode<int>* curr = q.front();
        q.pop();
        getline(s,str,',');
        if(str == "#"){
            curr->left = NULL;
        }
        else{
            TreeNode<int>* leftNode = new TreeNode<int>(stoi(str));
            curr->left = leftNode;
            q.push(leftNode);
        }
        getline(s,str,',');
        if(str == "#"){
            curr->right = NULL;
        }
        else{
            TreeNode<int>* rightNode = new TreeNode<int>(stoi(str));
            curr->right = rightNode;
            q.push(rightNode);
        }
    }
     
        return root;
}

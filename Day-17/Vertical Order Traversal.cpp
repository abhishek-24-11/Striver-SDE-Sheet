/************************************************************

Following is the Binary Tree node class
    
template <typename T = int>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }

    ~TreeNode()
    {
        if (left != NULL)
        {
            delete left;
        }
        if (right != NULL)
        {
            delete right;
        }
    }
};

************************************************************/
#include<bits/stdc++.h>
void solve(TreeNode<int>* root,int x,int y,map<int,map<int,vector<int>>> &mp){
    if(root == NULL){
        return;
    }
    mp[x][y].push_back(root->data);
    solve(root->left,x-1,y+1,mp);
    solve(root->right,x+1,y+1,mp);
}
vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    //    Write your code here.
    vector<int> ans;
    map<int,map<int,vector<int>>> mp;
    solve(root,0,0,mp);
    for(auto i:mp){
        for(auto j:i.second){
            for(auto k:j.second) ans.push_back(k);
        }
    }
    return ans;
}

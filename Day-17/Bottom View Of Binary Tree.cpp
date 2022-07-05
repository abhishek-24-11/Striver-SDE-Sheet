/*************************************************************
 
    Following is the Binary Tree node structure.

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
using namespace std;
vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
    
    vector<int> ans;
    if(!root) return ans;
    queue<pair<BinaryTreeNode<int>*,int>> q;
    q.push({root,0});
    map<int,int> mp;
    while(!q.empty()){
        pair<BinaryTreeNode<int>*,int> node = q.front();
        q.pop();
        BinaryTreeNode<int>*temp = node.first;
        int line = node.second;
        mp[line] = temp->data;
        if(temp->left) {
            q.push({temp->left,line-1});
        }
        if(temp->right){
            q.push({temp->right,line+1});
        }
    }
    for(auto it:mp){
        ans.push_back(it.second);
    }
    return ans;
    
}

#include<bits/stdc++.h>
using namespace std;
class BSTiterator
{
    public: 
    stack<TreeNode<int>*> s;
    BSTiterator(TreeNode<int> *root)
    {
        // write your code here
        pushAll(root);
    }
//     void pushAll(TreeNode<int>*node){
//         while(node != NULL){
//             s.push(node);
//             node = node->left;
//         }
//     }
    int next()
    {
        // write your code here
        TreeNode<int>* temp = s.top();
        s.pop();
        pushAll(temp->right);
        return temp->data;
    }

    bool hasNext()
    {
        // write your code here
        return !s.empty();
    }
    void pushAll(TreeNode<int>* node){
        for(;node != NULL;s.push(node),node = node->left);
    }
};

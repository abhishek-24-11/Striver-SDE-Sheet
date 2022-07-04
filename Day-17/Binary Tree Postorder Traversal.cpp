/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void solve(vector<int> &ans,TreeNode* root){
        if(root == NULL){
            return;
        }
        solve(ans,root->left);
        solve(ans,root->right);
        ans.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        // vector<int> ans;
        // solve(ans,root);
        // return ans;
        // vector<int> postorder;
        // if(root == NULL) return postorder;
        // stack<TreeNode*> s1,s2;
        // s1.push(root);
        // while(!s1.empty()){
        //     root = s1.top();
        //     s1.pop();
        //     s2.push(root);
        //     if(root->left != NULL) s1.push(root->left);
        //     if(root->right != NULL) s1.push(root->right);
        // }
        // while(!s2.empty()){
        //     postorder.push_back(s2.top()->val);
        //     s2.pop();
        // }
        // return postorder;
        vector<int> ans;
        if(root == NULL) return ans;
        stack<TreeNode*>s1,s2;
        s1.push(root);
        while(!s1.empty()){
            root = s1.top();
            s1.pop();
            s2.push(root);
            if(root->left != NULL) s1.push(root->left);
            if(root->right != NULL) s1.push(root->right);
        }
        while(!s2.empty() ){
            ans.push_back(s2.top()->val);
            s2.pop();
            
        }
        return ans;
    }
};

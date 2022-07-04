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
            return ;
        }
        solve(ans,root->left);
        ans.push_back(root->val);
        solve(ans,root->right);
       // return ans;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        // vector<int> inorder;
        // TreeNode* curr = root;
        // while(curr != NULL){
        //         if(curr->left == NULL){
        //             inorder.push_back(curr->val);
        //             curr = curr->right;
        //         }
        //     else{
        //         TreeNode* prev = curr->left;
        //         while(prev->right && prev->right != curr){
        //             prev = prev->right;
        //         }
        //         if(prev->right == NULL){
        //             prev->right = curr;
        //             curr = curr->left;
        //         }
        //         else{
        //             prev->right = NULL;
        //             inorder.push_back(curr->val);
        //             curr = curr->right;
        //         }
        //     }
        // }
        // return inorder;
        // vector<int> ans;
        // solve(ans, root);
        // return ans;
        stack<TreeNode*> s;
        vector<int> ans;
       // TreeNode* node = root;
        while(true){
            if(root != NULL){
                s.push(root);
                root = root->left;
            }
            else{
                if(s.empty()) break;
                root = s.top();
                s.pop();
                ans.push_back(root->val);
                root = root->right;
            }
            
        }
        return ans;
        
            
    }
};

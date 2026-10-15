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
public:
    void flatten(TreeNode* root) {
        TreeNode* res=root;
        TreeNode* ptr=res;
        if(!root) return;
        stack<TreeNode*> s;
        if(root->right) s.push(root->right);
        if(root->left) s.push(root->left);
        while(!s.empty()){
            ptr->right= s.top();
            ptr->left= nullptr;
            ptr= ptr->right;
            TreeNode* curr= s.top();
            s.pop();
            if(curr->right) s.push(curr->right);
            if(curr->left) s.push(curr->left);    
        }
        root= res;
        return ;
    }
};
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
   
    int count=0;
    int goodNodes(TreeNode* root) {
        func(root, root->val);
        return count;
    }
    void func(TreeNode* root , int umax){
        if(root==nullptr) return;
        if(root->val>=umax){
            umax=root->val;
            count++;
            
        }
        func(root->left,umax);
        func(root->right, umax);
        
    }
};
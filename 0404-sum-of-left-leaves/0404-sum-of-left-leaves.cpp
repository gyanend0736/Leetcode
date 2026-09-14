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
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
       helper(root, false);
       return sum;
        
    }
    void helper(TreeNode* root, bool a){
        if(root==nullptr) return;
        if(root->left==nullptr && root->right==nullptr && a){
            sum+= root->val;
            
        }
        helper(root->left, true);
        helper(root->right, false);
    }
    
};
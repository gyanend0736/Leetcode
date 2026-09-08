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
    int maxi=0;
    int maxDepth(TreeNode* root) {
        helper(root, 0);
        return maxi;
    }
    void helper(TreeNode* root, int l ){
        if(root== nullptr){
            maxi= max(l, maxi);
            return;
        } 
        helper(root->left, l+1);
        helper(root->right, l+1);
        

    }
};
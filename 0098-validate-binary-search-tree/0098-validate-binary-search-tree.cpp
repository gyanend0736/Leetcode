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
    
    bool isValidBST(TreeNode* root) {
        // if(!root->left && !root->right) return true;
        return validate(root, LLONG_MIN, LLONG_MAX);
    }
    bool validate(TreeNode* root, long long a, long long b){
        if(!root) return true;
        
        if(!(root->val>a && root->val<b)) return false;
        
        bool left= validate(root->left,a, root->val);
        bool right= validate(root->right, root->val, b);
        return left && right;

    }
};
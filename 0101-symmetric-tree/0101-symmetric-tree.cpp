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
    bool isSymmetric(TreeNode* root) {
        return func(root->left, root->right);
    }
    bool func(TreeNode* baye, TreeNode* daye){
        if(baye==nullptr && daye== nullptr){
            return true;
        }
        if(baye==nullptr || daye==nullptr) return false;
        return (daye->val==baye->val) && (func(baye->left, daye->right) && func(baye->right, daye->left));
    }
};

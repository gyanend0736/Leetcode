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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root){
            TreeNode* a= new TreeNode(val);
            return a;
        }
        if(root->val> val){
            if(!root->left){
                TreeNode* a= new TreeNode(val);
                root->left= a;
                return root;
            }
            insertIntoBST(root->left, val);
        }
        else{
             if(!root->right){
                TreeNode* a= new TreeNode(val);
                root->right= a;
                return root;
            }
            insertIntoBST(root->right, val);
        }
        return root;
    }
};
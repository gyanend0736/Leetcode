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
    int diameterOfBinaryTree(TreeNode* root) {
       helper(root);
       return maxi;
        
    }
    int helper(TreeNode* root){
         if(root==nullptr){
            return 0;
        }
        int leftT= helper(root->left);
        int rightT= helper(root->right);
        if(leftT+rightT>maxi){
            maxi= leftT+rightT;
            
        }
        return max(leftT, rightT)+1;
    }
};
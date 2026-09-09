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
    bool isBalanced(TreeNode* root) {
       
        return check(root)!=-1;

    }
    int check(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
        int hleft= check(root->left);
        if(hleft==-1){
            return -1;
        }
        int hright= check(root->right);
        if(hright==-1){
            return -1;
        }
        if(abs(hleft-hright)>1){
            return -1;
        }
        return max(hleft, hright)+1;
    }
};
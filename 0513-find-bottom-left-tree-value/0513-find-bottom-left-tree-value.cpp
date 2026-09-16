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
    int val=0;
    int maxDept= -1;
    int findBottomLeftValue(TreeNode* root) {
        f(root, 0);
        return val;
    }
    void f(TreeNode* root, int a){
        if(root== nullptr){
            return;
        }
        if(a>maxDept){
            val= root->val;
            maxDept=a;
        }
        f(root->left, a+1);
        f(root->right, a+1);
    }
};
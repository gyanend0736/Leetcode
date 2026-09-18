/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* res;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        func(root,p->val, q->val);
        return res;
    }
    int func(TreeNode* root, int p, int q){
        if(root==nullptr) return 0;
       

        int isleft= func(root->left,p,q);
        int isright= func(root->right,p,q);
        if(root->val==p || root->val==q){
            if(isleft+isright+1==2){
                res= root;
                return 0;
            }
            return 1;
        }
        if(isleft+isright== 2){
            res= root;
            return 0;
        }
        return isleft+isright;
    }

};
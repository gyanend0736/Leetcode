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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx=0;
        int inlast= inorder.size();
        return build(preorder, inorder, preidx, 0, inlast);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& preidx, int instart, int inlast){
        if(instart>= inlast) return nullptr;
        TreeNode* root= new TreeNode(preorder[preidx]);
        preidx++;
        
        
        for(int i=instart; i<inlast;i++){
            if(inorder[i]==root->val){
                root->left= build(preorder, inorder, preidx, instart, i);
                root->right = build(preorder, inorder, preidx, i+1, inlast);
                break;
            }
        }
        return root;
    }
};
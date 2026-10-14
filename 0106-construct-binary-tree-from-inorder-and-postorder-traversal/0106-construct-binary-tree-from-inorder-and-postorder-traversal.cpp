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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int postidx= postorder.size()-1;
        return build(inorder, postorder, postidx, 0, inorder.size());
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder ,int& postidx ,int instart ,int inend){
        if(instart>=inend) return nullptr;
        TreeNode* root= new TreeNode(postorder[postidx]);
        postidx--;
        for(int i = instart; i<inend; i++){
            if(inorder[i]== root->val){
                root->right= build(inorder, postorder, postidx, i+1, inend);

                root->left= build(inorder, postorder, postidx, instart, i);
                break;
            }
        }
        return root;
    }
};
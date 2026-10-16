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
    vector<int> sumarr;
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        
        helper(root);
        int maxi= sumarr[0];
        for(auto it: sumarr){
            if(it> maxi){
                maxi = it;
            }
        }
        return maxi;
    }
    int helper(TreeNode* root){
        if(!root) return 0;
        
        int left= helper(root->left);
        int right= helper(root->right);
        int ints= root->val+ max({0, left+right, left , right});
        sumarr.push_back(ints);
        return root->val+ max({0,left, right});
    }
};
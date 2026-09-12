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
    vector<vector<int>> res;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> arr;
        helper(root, targetSum, 0, arr);
        return res;
    }
    void helper(TreeNode* root, int targetSum,int currsum,vector<int>& arr){
        if(root==nullptr){
            return;
        }
        
        currsum+= root->val;
        arr.push_back(root->val);
        
        if(currsum== targetSum && root->left == nullptr && root->right == nullptr){
            res.push_back(arr);
          
        }
        
        helper(root->left, targetSum, currsum, arr);
        helper(root->right, targetSum, currsum,arr);

        arr.pop_back();

        
    }


};
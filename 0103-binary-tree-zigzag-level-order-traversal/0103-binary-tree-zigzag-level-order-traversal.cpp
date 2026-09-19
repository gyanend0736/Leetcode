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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> arr;
        if(!root) return res;
        vector<TreeNode*> q;
        q.push_back(root);
        bool a= true;
        arr.push_back(root->val);
        while(!q.empty()){
            int size= q.size();
            if(!a){
                reverse(arr.begin(), arr.end());
            }
            a=!a;
            res.push_back(arr);
            while(size--){
                if(q.front()->left){ q.push_back(q.front()->left); arr.push_back(q.front()->left->val);}
                if(q.front()->right){ q.push_back(q.front()->right); arr.push_back(q.front()->right->val);}
                q.erase(q.begin());
                arr.erase(arr.begin());
            }
            

        }
        return res;
    }
};
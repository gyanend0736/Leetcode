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
    
    vector<double> averageOfLevels(TreeNode* root) {
        if(root==nullptr) return {};
        vector<double> res;
        vector<TreeNode*> q;
        q.push_back(root);
        while(!q.empty()){
            long long sum=0;
            for(auto it:q) sum+=it->val;
            long long size= q.size();
            double avg= static_cast<double>(sum)/size;
            res.push_back(avg);
            while(size--){
                 if(q[0]->left) q.push_back(q[0]->left);
                if(q[0]->right) q.push_back(q[0]->right);
                q.erase(q.begin());
               
            }
        }

        return res;

    }
    
};

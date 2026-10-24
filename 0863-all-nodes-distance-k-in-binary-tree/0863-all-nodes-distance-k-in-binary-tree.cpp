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
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<TreeNode*> mpp(502,nullptr);
        stack<TreeNode*> s; 
        s.push(root);
        while(!s.empty()){
            TreeNode* curr= s.top();
            s.pop();
            if(curr->right){mpp[curr->right->val]=curr; s.push(curr->right);}
            if(curr->left){mpp[curr->left->val]=curr; s.push(curr->left);}
        }
        queue<TreeNode*> q;
        unordered_set<TreeNode*> visited;
        q.push(target);
        visited.insert(target);
        while(k>0){
            int size= q.size();
            while(size--){
                TreeNode* curr= q.front();
                q.pop();
                
                if(curr->left && !visited.count(curr->left)){
                    visited.insert(curr->left);
                    q.push(curr->left);
                }
                if(curr->right && !visited.count(curr->right)){
                    visited.insert(curr->right);
                    q.push(curr->right);
                }
               
                if(mpp[curr->val] && visited.find(mpp[curr->val])== visited.end()){
                    visited.insert(mpp[curr->val]);
                    q.push(mpp[curr->val]);
                } 
                
            }
            k--;
        }
        vector<int> ans;
        while(!q.empty()){
           
            ans.push_back(q.front()->val);
            q.pop();
        }
        return ans;
    }
};
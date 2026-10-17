/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res="";
        stack<TreeNode*> s;
        s.push(root);

        while(!s.empty()){
            TreeNode* curr=s.top();
            s.pop();
            if(!curr){
                res+= "N ";
                continue;
            }
            res+= to_string(curr->val);
            res+= " ";
            s.push(curr->right);
            s.push(curr->left);
            
           

        }
        return res;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        string word;
        vector<string> arr;
        while(ss >> word){
            arr.push_back(word);
        }
        int i=0;
        return buildwithVector(arr, i);
        
    }
    TreeNode* buildwithVector(vector<string>&  arr, int& i){
        if(i>= arr.size() || arr[i]=="N"){
            i++;
            return nullptr;
        }
        TreeNode* root= new TreeNode(stoi(arr[i]));
        i++;
        root->left= buildwithVector(arr, i);
        root->right= buildwithVector(arr, i);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
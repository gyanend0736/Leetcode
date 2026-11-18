class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> fn1;
        unordered_set<int> fn2;

        for(auto it:nums1) fn1.insert(it);
        for(auto it:nums2) fn2.insert(it);

        vector<vector<int>> ans(2);
        
        for(auto it:fn1){
            if(fn2.find(it)== fn2.end()){
                ans[0].push_back(it);
            }
        }
         for(auto it:fn2){
            if(fn1.find(it)== fn1.end()){
                ans[1].push_back(it);
            }
        }

        return ans;
    }
};
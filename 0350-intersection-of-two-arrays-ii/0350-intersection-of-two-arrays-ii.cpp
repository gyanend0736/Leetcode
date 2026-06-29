class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> store(1001,0);
        for(auto it:nums2){
            store[it]++;
        }
        vector<int> res;
        for(auto it:nums1){
            if(store[it]!=0){
                res.push_back(it);
                store[it]--;
            }
        }
        return res;

    }
};
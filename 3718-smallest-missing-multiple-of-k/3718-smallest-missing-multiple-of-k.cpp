class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        
        set<int> mpp;
        for(auto it:nums) mpp.insert(it);
        
        int i;
        for( i=k;i<=1000;i+=k){
           if(mpp.find(i)==mpp.end()) return i;
        }
        return i+k;
    }
};
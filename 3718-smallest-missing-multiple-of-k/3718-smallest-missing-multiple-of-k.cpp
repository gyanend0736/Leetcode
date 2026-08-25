class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        set<int> mpp;
        for(auto it:nums) mpp.insert(it);
        int co=k;
        
        for(auto it:mpp){
            if(it%k==0){
                if(it!=co){
                    return co;
                }
                else{
                    co+=k;
                }
            }
        }
        return co;
    }
};
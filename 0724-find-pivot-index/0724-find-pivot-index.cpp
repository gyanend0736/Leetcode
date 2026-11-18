class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumall=0;
        for(auto it:nums){
            sumall+=it;
        }
        int currsum=0;
        for(int i=0;i<nums.size();i++){
            sumall-= nums[i];
            if(sumall==currsum) return i;
            currsum+= nums[i];

        }
        return -1;
    }
};
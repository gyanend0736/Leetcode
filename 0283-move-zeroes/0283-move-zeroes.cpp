class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=-1;
        int i=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                j++;
                swap(nums[i],nums[j]);
            }
            i++;
        }
    }
};
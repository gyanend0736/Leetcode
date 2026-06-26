class Solution {
public:
    bool predictTheWinner(vector<int>& nums) {
        if(nums.size()<=1) return true;
        return helper(nums, 0, nums.size()-1, 0,0, true);
    }
    bool helper(vector<int>& nums, int i, int j,int sum1, int sum2, bool ischance){
        if(i>j){
            return sum2<=sum1;
        }
        if(ischance){
            
            return helper(nums, i+1, j, sum1+ nums[i], sum2, false) || helper(nums, i, j-1, sum1+nums[j], sum2, false);
        }
        
        return helper(nums, i+1, j, sum1, sum2+ nums[i], true) && helper(nums, i, j-1, sum1, sum2+nums[j], true);
    }
};
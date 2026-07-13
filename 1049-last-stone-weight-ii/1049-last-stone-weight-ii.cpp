class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int totalSum=0;
        int target;
        for(auto it:stones){
            totalSum+=it;    
        }
        target= totalSum/2;
        vector<bool> dp(target+1, false);
        dp[0]=true;
        for(auto it:stones){
            int j= target;
            while(j>=it){
                dp[j]= dp[j] || dp[j-it];
                j--;
            }
        }
        int i;
        for(i= target;i>=0;i--){
            if(dp[i]) break;
        }
        return totalSum- 2*i;
    }
};
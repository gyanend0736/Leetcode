class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        
        int maxi=0;
        for(auto it:nums){
            maxi=max(maxi,it);
        }
        vector<int> help(maxi+1,0);
        for(auto it:nums) help[it]++;

        
        vector<int> dp(maxi+1,0);
        dp[1]= help[1];
        for(int i=2;i<maxi+1;i++){
            int temp=0;
            dp[i]= max(dp[i-1], dp[i-2]+ i*help[i]);
        }
        return dp[maxi];
    }
};
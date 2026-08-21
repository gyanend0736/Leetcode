class Solution {
public:
    int integerBreak(int n) {
        vector<long long> dp(n+1,0);
        dp[0]=0;
        dp[1]=0;
        const int mod= 1e9+7;
        for(int i=2;i<=n;i++){
            long long maxp=0;
            for(int j=0;j<i;j++){
                long long res= ((i-j)*j)%mod;
                long long res1= ((i-j)*dp[j])%mod;
                if(maxp<res){
                    maxp= res;
                }
                if(maxp<res1){
                    maxp=res1;
                }
            }
            dp[i]= maxp%mod;
        }
        return dp[n];
    }
};
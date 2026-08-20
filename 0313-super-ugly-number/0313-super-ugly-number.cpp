class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int m= primes.size();
        vector<int> point(m,0);
        vector<long long> dp(n,0);
        dp[0]=1;
        for(int i=1; i<n;i++){
            
            long long min_item= (long long)(primes[0]*dp[point[0]]);
            for(int j=1;j<m;j++){
                if((long long)(dp[point[j]]*primes[j])<min_item){
                    min_item= (long long)(dp[point[j]]*primes[j]);
                    
                }
            }
            dp[i]= min_item;
            for (int j =0;j<m;j++)
            
                if( dp[point[j]] * primes[j] == min_item)
                    point[j]++;
        }
        return dp[n-1];
    }
};
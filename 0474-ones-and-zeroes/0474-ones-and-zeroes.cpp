class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<int> z_in_each;
        int sn= strs.size();
        for(auto it:strs){
            int countze=0;
            for(int i=0;i<it.size();i++){
                if(it[i]=='0'){
                    countze++;
                }
            }
            z_in_each.push_back(countze);
        }

        vector<vector<int>> dp(m+1, vector<int> (n+1,0));
        for(int k=0;k<sn;k++){
            int z= z_in_each[k];
            int o= strs[k].size()-z_in_each[k];
            for(int i=m;i>=z;i--){
                for(int j=n;j>=o;j--){
                
                    
                    dp[i][j]= max(dp[i][j], 1+ dp[i-z][j-o]);
                }
            }
        }
        return dp[m][n];
    }
};
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int m= dungeon.size();
        int n= dungeon[0].size();
        vector<vector<int>> dp(m, vector<int> (n,0));
        
        for(int i=m-1; i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(j==n-1 && i==m-1) {
                    dp[i][j]= (dungeon[i][j]<0)?dungeon[i][j]: 0;
                }
                else if(j==n-1){
                    dp[i][j]= (dungeon[i][j]<abs(dp[i+1][j]))? dungeon[i][j]+dp[i+1][j]: 0;
                }
                else if(i==m-1){
                    dp[i][j]= (dungeon[i][j]<abs(dp[i][j+1]))? dungeon[i][j]+dp[i][j+1]:0;
                }
                else{
                    dp[i][j]= (abs(max(dp[i+1][j], dp[i][j+1]))>dungeon[i][j])? dungeon[i][j]+max(dp[i+1][j], dp[i][j+1]):0;
                }
            }
        }
        return abs(dp[0][0])+1;
    }
};
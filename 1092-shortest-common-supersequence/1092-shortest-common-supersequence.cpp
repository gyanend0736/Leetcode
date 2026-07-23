class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int m= str1.size();
        int n= str2.size();
       

        vector<vector<int>> dp(m+1, vector<int> (n+1,0));
        for(int i=1;i<m+1;i++){
            for(int j=1;j<n+1;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]= 1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
       string res= "";
       int i= m, j=n;
       while(i>0 && j>0){
        if(str1[i-1]== str2[j-1]){
            res= str1[i-1]+res;
            i--;
            j--;
        }
        else if(dp[i-1][j]<dp[i][j-1]){
            res= str2[j-1]+res;
            j--;
        }
        else{
            res= str1[i-1]+res;
            i--;
        }
       }
        while(i>0){ res= str1[i-1]+res; i--;}
        while(j>0){ res= str2[j-1]+res; j--;}
        return res;
    }

};
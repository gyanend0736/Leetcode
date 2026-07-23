class Solution {
public:
    int minDistance(string word1, string word2) {
        int m= word1.length();
        int n= word2.length();
        vector<int> row1(n+1,0), row2(n+1,0);
        for(int i=0;i<m;i++){
            for(int j=1;j<=n;j++){
                if(word1[i]==word2[j-1]){
                    row2[j]= 1+row1[j-1];
                }
                else{
                    row2[j]= max(row2[j-1], row1[j]);
                }
                
            }
            row1= row2;
        }
        return m+n- 2*row2[n];
    }
};
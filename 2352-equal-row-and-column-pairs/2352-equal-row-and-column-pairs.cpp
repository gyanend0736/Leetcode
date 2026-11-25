class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans =0;
        int n= grid.size();
        map< vector<int>,int> rocount;
        for(int i=0;i<n;i++){
            rocount[grid[i]]++;
        }
        for(int j=0;j<n;j++){
            vector<int> cur;
            for(int i= 0;i<n;i++){
                cur.push_back(grid[i][j]);

            }
            ans+= rocount[cur];
        }
        return ans;
    }
};
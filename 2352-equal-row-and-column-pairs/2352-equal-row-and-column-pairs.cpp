class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans =0;
        int n= grid.size();
        map<int, vector<int>> cols;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cols[j].push_back(grid[i][j]);
            }
        }
        for(auto row:grid){
            for(auto col:cols){
                if(row==col.second){
                    ans++;
                }
            }
        }
        return ans;
    }
};
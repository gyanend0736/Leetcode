class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans= 0;
        int height=0;
        for(auto it:gain ){
            height+= it;
            ans= max(ans, height);
        }
        return ans;
    }
};
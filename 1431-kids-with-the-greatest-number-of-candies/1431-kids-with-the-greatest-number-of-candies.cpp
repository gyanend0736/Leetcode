class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatcan= 0;
        for(auto it:candies) greatcan= max(greatcan, it);

        vector<bool> ans;
        for(auto it:candies){
            if(extraCandies+it>=greatcan) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
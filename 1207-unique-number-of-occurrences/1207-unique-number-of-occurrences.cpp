class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        for(int it:arr){
            mpp[it]++;
        }
        unordered_set<int> unicount;
        for(auto it:mpp){
            if(unicount.find(it.second)!=unicount.end()) return false;
            unicount.insert(it.second);
        }
        return true;
    }
};
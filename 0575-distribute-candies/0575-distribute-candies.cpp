class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> unique_candy;
        for(auto it:candyType){
            unique_candy.insert(it);
        }
        int n= candyType.size();
        int m= unique_candy.size();
        return (m>n/2)? n/2: m;
    }
};
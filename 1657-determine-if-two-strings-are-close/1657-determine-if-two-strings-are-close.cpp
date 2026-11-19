class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> mppa(26,0);
        vector<int> mppb(26,0);

        for(auto it:word1) mppa[it-'a']++;
        for(auto it: word2) mppb[it-'a']++;

         for (int i = 0; i < 26; i++) {
            if ((mppa[i] == 0) != (mppb[i] == 0))
                return false;
        }

        sort(mppa.begin(), mppa.end());
        sort(mppb.begin(), mppb.end());

        return mppa == mppb;

    }
};
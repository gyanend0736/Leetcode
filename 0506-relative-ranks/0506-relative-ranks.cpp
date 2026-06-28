class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> cpScore= score;
        sort(cpScore.begin(), cpScore.end(), greater<int>());
        int n= score.size();
        vector<string> res(n);
        vector<int> mpp(pow(10,6)+1);
        for(int i=0;i<n;i++){
            mpp[cpScore[i]]=i;
        }
        for(int i=0;i<score.size();i++){
                if(mpp[score[i]]==0){
                    res[i]= "Gold Medal";
                }
                else if(mpp[score[i]]==1) res[i]="Silver Medal";
                else if(mpp[score[i]]==2) res[i]="Bronze Medal";
                else res[i]= to_string(mpp[score[i]]+1);
        }
        return res;

    }
};
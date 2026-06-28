class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> cpScore= score;
        sort(cpScore.begin(), cpScore.end(), greater<int>());
        int n= score.size();
        vector<string> res(n);
        for(int i=0;i<score.size();i++){
            for(int j=0;j<n;j++){
                if(score[i]==cpScore[j]){
                    if(j==0){
                        res[i]= "Gold Medal";
                    }
                    else if(j==1) res[i]="Silver Medal";
                    else if(j==2) res[i]="Bronze Medal";
                    else res[i]= to_string(j+1);
                    break;
                }
            }
        }
        return res;

    }
};
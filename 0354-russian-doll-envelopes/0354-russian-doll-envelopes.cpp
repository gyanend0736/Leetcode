class Solution {
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(), envelopes.end(),[](const  auto& x, const auto& y){
            if(x[0]==y[0]){
                return x[1]>y[1];
            }
            return x[0]<y[0];
        });
        int n= envelopes.size();

        vector<int> tail;
        for(auto it:envelopes){
            int i=0;
            int j=tail.size();
            while(i<j){
                int mid= (i+j)/2;
                if(tail[mid]>=it[1]){
                    j= mid;
                }
                else{
                    i= mid+1;
                }
            }
            if(i>=tail.size()){
                tail.push_back(it[1]);
            }
            else{
                tail[i]= it[1];
            }
        }
        return tail.size();
    }
};
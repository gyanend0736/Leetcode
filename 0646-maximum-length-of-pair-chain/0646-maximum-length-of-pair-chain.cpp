class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int> &a, const vector<int>&b){
            if(a[0]==b[0]) return a[1]>b[1];
            return a[0]<b[0];
        });
        vector<int> last;
        last.push_back(pairs[0][1]);
        for(int a=1;a<pairs.size();a++){
            int i=0;
            int j=last.size();
            vector<int> it= pairs[a];
            while(i<j){
                int mid=(i+j)/2;
                if(last[mid]>=it[1]){
                    j=mid;
                }
                else{
                    i= mid+1;
                }
            }
            if(i==0){
                last[i]=it[1];
            }
            else if(it[0]>last[i-1])
                if(i>=last.size()) last.push_back(it[1]);
                else last[i]=it[1];
            
        }
        return last.size();
    }

};
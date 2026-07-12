class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> t= arr;
        sort(t.begin(),t.end());
        unordered_map<int,int> mpp;
        int rank=1;
        for(int i=0;i<t.size();i++){
            
            if(i>0 && t[i]!=t[i-1]) rank++;
            mpp[t[i]]=rank;
        }
        for(int i=0;i<t.size();i++){
            arr[i]= mpp[arr[i]];
        }
        return arr;
    }
};
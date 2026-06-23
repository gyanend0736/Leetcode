class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n= s.size();
        vector<int> res(n);

        for(int i=0;i<n;i++){
            int diff=INT_MAX;
            if(s[i]==c){
                res[i]=0;
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(s[j]==c){
                    diff= j-i;
                    break;
                }
            }
            if(i>0){
                res[i]= min(res[i-1]+1,diff);
            }
            else{
                res[i]=diff;
            }
        }
        return res;
    }
};
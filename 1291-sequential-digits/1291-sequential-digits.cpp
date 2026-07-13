class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       vector<char> ref={'1','2','3','4','5','6','7','8','9'};
       vector<int> midres;
       vector<int> res;
       for(int i=0;i<9;i++){
        string str= "";
        str+= ref[i];
        for(int j=i+1;j<9;j++){
            str+= ref[j];
            midres.push_back(stoi(str));
        }
       }
       for(auto it:midres){
        if(it>=low && it<=high){
            res.push_back(it);
        }
       }
       sort(res.begin(),res.end());
       return res;
    }
};
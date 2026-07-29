class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
       vector<int> tail;
       for(int it:nums){
        int i=0;
        int j=tail.size();
        while(i<j){
            int mid= (i+j)/2;
            if(tail[mid]>=it){
                j= mid;
            }
            else{
                i= mid+1;
            }

        }
        if(i<tail.size()){
            tail[i]=it;
        }
        else{
            tail.push_back(it);
        }
       }

        return tail.size();
    }

};
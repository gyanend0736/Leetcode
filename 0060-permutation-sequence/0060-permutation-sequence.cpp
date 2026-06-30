class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> factorial(n+1,0);
        factorial[0]=1;
        k = k - 1;
        factorial[1]=1;
        for(int i=2;i<=n;i++){
            factorial[i]= i*factorial[i-1];
        }
        vector<int> nums;
        for(int i=1;i<=n;i++){
            nums.push_back(i);
        }
        
        string res;
        for(int i=n;i>0;i--){
            int block= factorial[i-1];
            int idx= k/block;
            res+= to_string(nums[idx]);
            nums.erase(nums.begin()+idx);
            k= k%block;
        }
        
        
      
       return res;
    }
};
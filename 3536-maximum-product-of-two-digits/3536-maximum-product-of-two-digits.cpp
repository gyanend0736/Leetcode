class Solution {
public:
    int maxProduct(int n) {
        int maxi=0;
        int secm=0;
        while(n>0){
            if(n%10>maxi){
                secm= maxi;
                maxi= n%10;
            }
            else if(n%10> secm) secm= n%10;
            n/=10;
        }
        return maxi*secm;
    }
};
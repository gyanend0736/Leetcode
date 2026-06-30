class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int sum=0;
        for(int i=1;i<=n+k;i++){
            if((n & i)==0 && abs(n-i)<=k){
                sum+=i;
            }
        }
        return sum;
    }
};
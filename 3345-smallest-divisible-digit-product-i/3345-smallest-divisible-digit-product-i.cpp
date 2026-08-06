class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+10;i++){
            long long sum= 1;
            long long temp= i;
            while(temp>0){
                sum*=temp%10;
                temp/=10;
            }
            if(sum%t==0){
                return i;
            }
        }
        return -1;
    }
};
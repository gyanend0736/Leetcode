class Solution {
public:
    int countDigitOne(int n) {
        int totalOnes=0;
        for(long long i=1; i<=n;i*=10){
            int higher= n/ (i*10);
            int current= (n/i)%10;
            int lower= n%i;

            if(current==0){
                totalOnes+=higher*i;
            }
            else if(current==1){
                totalOnes+= (higher*i) + lower +1;
            }
            else{
                totalOnes+=(higher+1)*i;
            }
        }
        
        return totalOnes;
    }
};
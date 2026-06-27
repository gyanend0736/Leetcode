class Solution {
public:
    int lastRemaining(int n) {
        return helper(n,1,true, 1);
    }
    int helper( int n, int step, bool isleft, int first ){
       if(n==1) return first;

       if(isleft || n%2==1){
         first+=step;
       }

       return helper(n/2,step*2,!isleft,first);
    }
};
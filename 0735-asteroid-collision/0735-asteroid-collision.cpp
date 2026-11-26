class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;
        for(auto it : asteroids){
           while(!s.empty() && s.top()>0 && it<0){
            if(abs(s.top())<abs(it)) s.pop();
            else if(s.top()==abs(it)){
                s.pop();
                it=0;
                break;
            }
            else{
                it=0;
                break;
            }
           }
           if(it!=0) s.push(it);
        }

        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
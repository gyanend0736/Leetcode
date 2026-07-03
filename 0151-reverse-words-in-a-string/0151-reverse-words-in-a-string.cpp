class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string temp="";
        int counts=0;
        for(auto it:s) if(it!=' ') counts++;
        for(int i= s.size()-1;i>=0;i--){
            if(s[i]==' '){
                
                reverse(temp.begin(), temp.end());
                ans+=  temp;
                if(temp!="" && counts!=0)
                ans+=' ';
                temp="";
            }
            else{
                temp+=s[i];
                counts--;
            }

        }
        reverse(temp.begin(), temp.end());
        ans+=  temp;
        return ans;
    }
};
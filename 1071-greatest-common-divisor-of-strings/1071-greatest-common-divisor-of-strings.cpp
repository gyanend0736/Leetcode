class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m= str1.size();
        int n= str2.size();
        int l_str;
        for(int i=min(m, n);i>0;i-- ){
            if(m%i==0 && n%i==0){l_str=i;break;}
        }
        string res="";
        for(int i=0;i<l_str;i++) res+= str1[i];
        int j=0;
        for(int i=0;i<m;i++){
            if(j==l_str) j=0;
            if(str1[i]!=res[j]) return "";
            j++;
        }
        j=0;
        for(int i=0;i<n;i++){
            if(j==l_str) j=0;
            if(str2[i]!=res[j]) return "";
            j++;
        }
        return res;
    }
};
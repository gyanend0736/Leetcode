class Solution {
public:
    bool isVowel(char c) {
    c = tolower(c); // Reduces our checks by half!
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseVowels(string s) {
        int i=0, j= s.size()-1;
        while(i<j){
            if(isVowel(s[i])){
                if(isVowel(s[j])){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }
                else j--;

            }
            else if(isVowel(s[j])){
                if(isVowel(s[i])){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else{
                    i++;
                }
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};
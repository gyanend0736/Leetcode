class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c); // Reduces our checks by half!
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }
    string reverseVowels(string s) {
        string vowel="";
        for(auto it:s){
            if(isVowel(it)) vowel+=it;
        }
        reverse(vowel.begin(), vowel.end());
        int k=0;
        string res="";
        for(int i=0;i< s.size();i++){
            if(isVowel(s[i])){
                res+=vowel[k];
                k++;
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};
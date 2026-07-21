class Solution {
public:
    int distinctSubseqII(string s) {
        int Mod= 1e9+7;
        int n= s.size();
        vector<int> last_visited(26,0);
        long long current_count=0;
        for(int i=0;i<n;i++){
            int char_idx= s[i]-'a';
            int new_count= (current_count+1 - last_visited[char_idx] +Mod)%Mod;
            current_count= (new_count+current_count)%Mod;
            last_visited[char_idx]= (last_visited[char_idx]+new_count)%Mod;
        }
        return current_count;
    }
};
class Solution {
public:
    string decodeString(string s) {
        stack<char> help;
        for(auto it:s){
            if(it==']'){
                string str="";
                while(help.top()!='['){
                    str+= help.top();
                    help.pop();
                }
                help.pop();
                string numStr = "";
while (!help.empty() && isdigit(help.top())) {
    numStr += help.top();
    help.pop();
}
reverse(numStr.begin(), numStr.end()); // Reverse because stack is LIFO
int cop = stoi(numStr);
                int i=0;
                while(i<cop){
                    for(int j=str.length()-1;j>=0;j--){
                     help.push(str[j]);
                    }
                    i++;
                }
                
                
            }
            else{
                help.push(it);
            }
        }
        string result="";
        while(help.size()>0){
            result+= help.top();
            help.pop();
        }
        reverse(result.begin(), result.end());
        return result;
        
    }
};
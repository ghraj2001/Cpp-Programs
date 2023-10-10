class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> m;
        string ans = "";
        int i = 0;
        for(auto k : key){
            if(k != ' '){
                if(!m[k])
                    m[k] = 'a' + i++;
            }
            if(m.size()==26)break;
        }
        for(auto msg : message){
            if(msg == ' ')
                ans += " ";
            else
                ans += m[msg];
        }
        return ans;
    }
};
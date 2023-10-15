class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2)return "";
        unordered_set<char>uset;
        for(auto x:s)uset.insert(x);
        for(int i=0;i<s.size();i++)
        {
            if(uset.count(tolower(s[i]))>0 && uset.count(toupper(s[i]))>0)continue;
            string prev=longestNiceSubstring(s.substr(0,i));
            string next=longestNiceSubstring(s.substr(i+1,s.size()));
            return prev.size()>=next.size()?prev:next;
        }
        return s;
    }
};
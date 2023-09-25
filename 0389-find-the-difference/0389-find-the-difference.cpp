class Solution {
public:
    char findTheDifference(string s, string t) {
        char ch;
        unordered_map<char, int>m;
        for(int i=0; i<s.size();i++){
            m[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(m[t[i]] < 1) return t[i];
            else m[t[i]]--;
        }
        return ch;
    }
};
class Solution {
public:
    string reverseStr(string s, int k) {
        string ans = "";
        int i = 0, n = s.size();
        while(1){
            int x = 2*k;
            string newStr = "";
            while(n && x){
                if(x > k) newStr = s[i++] + newStr;
                else newStr = newStr + s[i++];
                n--;x--;
            }
            ans += newStr;
            if(n <= 0) break;
        }
        return ans;
    }
};
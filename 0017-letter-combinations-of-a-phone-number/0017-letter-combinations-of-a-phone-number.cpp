// class Solution {
// public:
//     void solve(string digits,string output,vector<string>& ans,int index,vector<string>mapping)
//     {
//         // base case
//         if(index == digits.length())
//         {
//             ans.push_back(output);
//             return ;
//         }

//         int num = digits[index] - '0';
//         string value = mapping[num];
//         for(int i=0; i<mapping[num].length();i++){
//             output.push_back(value[i]);
//             solve(digits, output, ans, index+1, mapping);
//             output.pop_back();
//         }

//     }

//     vector<string> letterCombinations(string digits) {
//         vector<string> ans;
//         if(digits.length() < 1) return ans;
//         string output = "";
//         vector<string>mapping = {"", "", "abc", "def", "ghi", "jkl","mno","pqrs","tuv","wxyz"};
//         solve(digits, output, ans, 0, mapping);
//         return ans;
//     }
// };





































class Solution {
public:
    void solve(vector<string> &ans, string output, string digits,
               map<int, string> &m , int index)
    {
        // Base Case
        if(index == digits.size()){
            ans.push_back(output);
            return;
        }
        
        // small calculation
        int x = digits[index] - '0';
        // cout<<x<<" ";
        for(auto it : m[x]){
            output.push_back(it);
            solve(ans, output, digits, m , index+1);
            output.pop_back();
        }
    }
   

    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string output="";
        
        if(digits == "")return ans;
        
       map<int, string>m;
        m[2] = "abc";
        m[3]="def";
        m[4]="ghi";
        m[5]="jkl";
        m[6]="mno";
        m[7]="pqrs"; 
        m[8]="tuv";
        m[9]="wxyz";
        
        
        int index=0;
        
        solve(ans, output, digits, m, index);
        return ans;
    }
};





























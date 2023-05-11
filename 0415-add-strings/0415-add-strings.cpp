// sum = carry + ele1 + ele2
// carry = 1 or 0

class Solution {
public:
    string addStrings(string num1, string num2) {
    string result;
    int i = num1.size()-1, j = num2.size()-1;
    int carry = 0;
    while(i >= 0 || j >= 0){
        int sum = carry;
        i >= 0 ? sum += num1[i--] -'0' : sum += 0;
        j >= 0 ? sum += num2[j--] - '0' : sum += 0;
        carry = sum > 9 ? 1 : 0;
        result = to_string(sum%10) + result;
    }
    if(carry) result = to_string(carry) + result;
    return result;
    }
};
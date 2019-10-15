class Solution {
public:
    string addStrings(string num1, string num2) {
        int len1 = num1.length();
        int len2 = num2.length();
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        if(len1 < len2){
            int n = len2 - len1;
            while(n--){
                num1 = num1 + '0';
            }
        } else {
            int n = len1 - len2;
            while(n--){
                num2 = num2 + '0';
            }
        }
        string res = "";
        int carry = 0;
        int len = max(len1, len2);
        for(int i=0; i<len; i++){
            res = res + to_string(((num1[i] - '0') + (num2[i] - '0') + carry) % 10);
            carry = ((num1[i] - '0') + (num2[i] - '0') + carry) / 10;
        }
        if(carry){
            res = res + "1";
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
class Solution {
public:
    string convertToTitle(int n) {
        string ans = "ZABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string res = "";
        while(n){
            res = ans[n%26] + res;
            if(n%26 == 0)
                n = (n-26)/26;
            else
                n = (n-n%26)/26;
        }
        return res;
    }
};
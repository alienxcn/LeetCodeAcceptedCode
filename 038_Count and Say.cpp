// 打表。
class Solution {
public:
    string countAndSay(int n) {
        vector<string> strs;
        strs.push_back("1");
        strs.push_back("11");
        int t = 30;
        while(t--){
            string s = strs[30-t];
            string m = "";
            int t = s.length();
            for(int i=0; i<t; i++){
                char p = s[i];
                int num = 0;
                while(i<t && s[i] == p){
                    num++;
                    i++;
                }
                i--;
                m += to_string(num) + p;
            }
            strs.push_back(m);
        }   
        return strs[n-1];
    }
};
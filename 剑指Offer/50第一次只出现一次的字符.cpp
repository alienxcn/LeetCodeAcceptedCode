class Solution {
public:
    char firstUniqChar(string s) {
        vector<int> ans(256, 0);
        int len = s.size();
        for(int i=0; i<len; i++){
            int temp = s[i] - '0';
            temp += 48;
            // cout << temp << endl;
            ans[temp]++;
        }
        for(int i=0; i<len; i++){
            int temp = s[i] - '0';
            temp += 48;
            if(ans[temp] == 1){
                return s[i];
            }
        }
        return ' ';
    }
};
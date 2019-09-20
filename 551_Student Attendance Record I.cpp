class Solution {
public:
    bool checkRecord(string s) {
        int As = 0;
        for(int i = 0; i<s.size(); i++){
            if(s[i] == 'A'){
                As++;
            }
        }
        if(s.find("LLL") == s.npos && As < 2){
            return true;
        } else {
            return false;
        }
    }
};
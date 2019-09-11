class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = s.length();
        if(!len)
            return 0;
        int ans = 0;
        int index = len-1;
        while(index && s[index] == ' '){
            index--;
        }
        for(int i=index; i>=0; i--){
            if(s[i] != ' ')
                ans++;
            else
                break;
        }
        return ans;
    }
};
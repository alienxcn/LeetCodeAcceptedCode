class Solution {
public:
    void reverseString(vector<char>& s) {
        int len = s.size();
        int i = 0;
        int j = len - 1;
        while(i < j){
            char t = s[i];
            s[i] = s[j];
            s[j] = t;
            i++;
            j--;
        }
    }
};
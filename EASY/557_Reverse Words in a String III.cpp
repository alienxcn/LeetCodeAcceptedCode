class Solution {
public:
    string reverseWords(string s) {
        if(s == "")
            return s;
        int start = 0;
        int end = s.find(" ", 0);
        
        while(end != s.npos){
            reverse(s.begin() + start, s.begin() + end);
            start = end + 1;
            end = s.find(" ", start);
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};
class Solution {
public:
    bool test(string s){
        string temp = s;
        reverse(s.begin(), s.end());
        if(s.compare(temp) == 0)
            return true;
        else
            return false;
    }
    bool validPalindrome(string s) {
        for(int i=0; i<s.size()/2; i++){
            if(s[i] != s[s.size()-i-1]){
                cout << s.substr(i, s.size() - 2*i-1) << " " << s.substr(i+1, s.size() - 2*i-1) << endl;
                return (test(s.substr(i, s.size() - 2*i-1)) || test(s.substr(i+1, s.size() - 2*i-1)));
            }
        }
        return true;
    }
};
class Solution {
public:
    void SplitString(const string& srcStr, vector<string>& vec, const string& separator){
        string::size_type posSubstringStart;
        string::size_type posSeparator;
        posSeparator= srcStr.find(separator);
        posSubstringStart= 0;
        while (string::npos != posSeparator){
            vec.push_back(srcStr.substr(posSubstringStart, posSeparator- posSubstringStart));
            posSubstringStart= posSeparator+ separator.size();
            posSeparator= srcStr.find(separator, posSubstringStart);
        }
        if (posSubstringStart!= srcStr.length())
            vec.push_back(srcStr.substr(posSubstringStart));
    }
    int find(vector<string>& vec, string s){
        int len = vec.size();
        for(int i=0; i<len; i++){
            if(vec[i] == s){
                return i;
            }
        }
        return -1;
    }
    bool wordPattern(string pattern, string str) {
        vector<string> ans;
        SplitString(str, ans, " ");
        if(pattern.length() != ans.size()){
            return false;
        }
        int len = pattern.length();
        for(int i=0; i<len; i++){
            if(pattern.find(pattern[i]) != find(ans, ans[i])){
                return false;
            }
        }
        return true;
    }
};
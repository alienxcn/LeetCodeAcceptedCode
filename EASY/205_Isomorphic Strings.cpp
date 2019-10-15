// 利用位置信息构造映射关联。
// s.find(s[i]) 总是小于等于i。
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        } else {
            int len = s.length();
            for(int i=0; i<len; i++){
                if(s.find(s[i]) != t.find(t[i])){
                    return false;
                }
            }
        }
        return true;
    }
};
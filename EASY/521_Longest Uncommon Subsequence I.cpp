class Solution {
public:
    int findLUSlength(string a, string b) {
        // 题目意思完全不知道要干嘛。
        if(a.compare(b) == 0){
            return -1;
        } else {
            return a.size() > b.size() ? a.size() : b.size();
        }
    }
};
class Solution {
public:
    string minNumber(vector<int>& nums) {
        // 选取使字符串组合更小的排序规则
        vector<string> tmp;
        for(int n : nums)
            tmp.push_back(to_string(n));
        sort(tmp.begin(), tmp.end(), [](string L, string R){return L+R < R+L;});
        string res = "";
        for(string s : tmp) 
            res += s;
        return res;
    }
};
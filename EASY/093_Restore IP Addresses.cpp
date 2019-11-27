// 思路：递归。注意函数的参数t没有使用到引用。这样可能会引起内存消耗过多。考虑到本题中的递归深度其实是比较小的，所以可以忽视。

class Solution {
public:
    vector<string> res;
    void func(vector<string>& res, string& s, string t, int posi, int point){
        if(point == 4){
            if(posi == s.size()){
                int head = 0;
                int end = 0;
                while((end = t.find('.', head)) != string::npos){
                    int cut = 0;
                    for(int i=head; i<end; i++){
                        cut = (10*cut + (t[i] - '0'));
                    }
                    if(t[head] == '0' && end-head != 1)
                        return;
                    head = end + 1;
                    if((0 <= cut && cut <= 255)){
                        continue;
                    } else {
                        return;
                    }
                }
                t.erase(t.end()-1);
                res.push_back(t);
            }
            return;
        }
        func(res, s, t + s[posi] + '.', posi + 1, point + 1);
        func(res, s, t + s[posi] + s[posi+1] + '.', posi + 2, point + 1);
        func(res, s, t + s[posi] + s[posi+1] + s[posi+2] + '.', posi + 3, point + 1);
    }
    vector<string> restoreIpAddresses(string s) {
        string t = "";
        func(res, s, t, 0, 0);
        return res;
    }
};
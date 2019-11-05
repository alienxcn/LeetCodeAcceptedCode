class Solution {
public:
    string kms[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void func(vector<string>& res, string& digits, int posi, string& t){
        if(posi == digits.size()){
            res.push_back(t);
            return;
        }
        string in = kms[(digits[posi]-'0')-2];
        for(int i=0; i<in.size(); i++){
            t += in[i];
            func(res, digits, posi+1, t);
            t.erase(t.end()-1);
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if(digits.size() == 0)
            return res;
        string str = "";
        func(res, digits, 0, str);
        return res;
    }
};
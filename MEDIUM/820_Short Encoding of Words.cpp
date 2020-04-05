class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        string res;
        for(string i : words)
            res += (i + "#");
        for(string i : words){
            int posi = res.find(i + "#");
            int len = i.size() + 1;
            while((posi = res.find(i + "#", posi + len)) != string::npos){
                res.erase(posi, len);
            }
        }
        cout << res << endl;
        return res.size();
    }
};
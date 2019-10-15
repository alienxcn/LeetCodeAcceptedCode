// 未通过
class Solution {
public:
    int compress(vector<char>& chars) {
        sort(chars.begin(), chars.end());
        vector<char>::iterator i = chars.begin();
        while(i != chars.end()){
            char ch = *i;
            vector<char>::iterator t = remove(chars.begin(), chars.end(), ch);
            int num = chars.end() - t;
            chars.erase(t, chars.end());
            string strnum = to_string(num);
            if(num != 1){
                for(int j=strnum.length()-1; j>=0; j--){
                    chars.insert(i, strnum[j]);
                }
            }
            chars.insert(i, ch);
            if(num == 1){
                i += 1;
            } else {
                i += 1 + strnum.length();
            }
        }
        return chars.size();
    }
};
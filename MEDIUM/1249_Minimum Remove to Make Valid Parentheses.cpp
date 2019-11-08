class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int su = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                su++;
            }
            if(s[i] == ')'){
                if(su != 0){
                    int t = i;
                    // 向前搜索第一个左括号
                    while(s[t] != '(')
                        t--;
                    // 做标记
                    s[t] = '#';
                    s[i] = '$';
                    su--;
                }
            }
        }
        int posi = 0;
        while((posi = s.find('(')) != string::npos){
            s.erase(posi, 1);
        }
        while((posi = s.find(')')) != string::npos){
            s.erase(posi, 1);
        }
        for(string::iterator it = s.begin(); it!=s.end(); it++){
            if(*it == '#')
                *it = '(';
            if(*it == '$')
                *it = ')';
        }
        return s;
    }
};
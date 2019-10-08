class Solution {
public:
    string toGoatLatin(string S) {
        vector<string> ans;
        string res;
        int head = 0;
        int posi = 0;
        while((posi = S.find(' ', posi)) != string::npos){
            ans.push_back(S.substr(head, posi-head));
            head = ++posi;
        }
        ans.push_back(S.substr(head, S.size()));
        for(int i=0; i<ans.size(); i++){
            string temp = ans[i];
            char t = tolower(temp[0]);
            if(t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u'){
                temp = temp + "ma";
            } else {
                t = temp[0];
                temp.erase(0, 1);
                temp = temp + t + "ma";
            }
            int k = i+1;
            while(k--)
                temp = temp + 'a';
            res = res + temp + ' ';
        }
        res.erase(res.size()-1, 1);
        return res;
    }
};
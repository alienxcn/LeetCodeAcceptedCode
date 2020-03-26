class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int res = 0;
        for(int i=0; i<words.size(); i++)
            sort(words[i].begin(), words[i].end());
        sort(chars.begin(), chars.end());
        for(int i=0; i<words.size(); i++){
            if(words[i].size() > chars.size())
                continue;
            int ptr1 = 0;
            int ptr2 = 0;
            while(ptr1 < words[i].size()){
                if(words[i][ptr1] == chars[ptr2])
                    ptr1++;
                ptr2++;
                if(ptr2 == chars.size())
                    break;
            }
            // cout <<words[i] << " " << ptr1 << " " << ptr2 << endl;
            if(ptr1 == words[i].size() && ptr2 <= chars.size())
                res += ptr1;
        }
        return res;
    }
};

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> R(26, 0);
        int res = 0;
        for(int i=0; i<chars.size(); i++){
            R[chars[i] - 'a']++;
        }
        for(int i=0; i<words.size(); i++){
            string temp = words[i];
            vector<int> L(26,0);
            for(int j=0; j<temp.size(); j++){
                L[temp[j] - 'a']++;
            }
            int p = 0;
            for(; p<26; p++){
                if(L[p] > R[p])
                    break;
            }
            if(p == 26)
                res += temp.size();
        }
        return res;
    }
};
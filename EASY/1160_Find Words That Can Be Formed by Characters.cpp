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
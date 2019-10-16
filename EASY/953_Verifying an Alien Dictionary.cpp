class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<string> temp;
        for(int i=0; i<words.size(); i++){
            for(int j=0; j<words[i].size(); j++){
                words[i][j] = order.find(words[i][j]) + 'a';
            }
            temp.push_back(words[i]);
        }
        sort(words.begin(), words.end());
        for(int i=0; i<temp.size(); i++){
            if(temp[i].compare(words[i]) != 0)
                return false;
        }
        return true;
    }
};
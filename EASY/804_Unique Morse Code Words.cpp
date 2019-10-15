class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string moss[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> res;
        for(int i=0; i<words.size(); i++){
            string temp;
            for(int j=0; j<words[i].size(); j++){
                temp = temp + moss[words[i][j] - 'a'];
            }
            res.insert(temp);
        }
        return res.size();
    }
};
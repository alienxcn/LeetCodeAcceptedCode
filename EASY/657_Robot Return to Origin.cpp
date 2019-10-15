class Solution {
public:
    bool judgeCircle(string moves) {
        map<char, int> m;
        m['U'] = 0;
        m['D'] = 0;
        m['L'] = 0;
        m['R'] = 0;
        for(int i=0; i<moves.size(); i++){
            m[moves[i]]++;
        }
        if(m['U'] - m['D'] == 0 && m['L'] - m['R'] == 0){
            return true;
        } else {
            return false;
        }
    }
};
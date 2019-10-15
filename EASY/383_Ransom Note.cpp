class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int len = ransomNote.length();
        for(int i=0; i<len; i++){
            int t = magazine.find(ransomNote[i]);
            if(t != string::npos){
                magazine.erase(t, 1);
            } else {
                return false;
            }
        }
        return true;
    }
};
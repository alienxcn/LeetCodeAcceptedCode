class Solution {
public:
    bool detectCapitalUse(string word) {
        if (islower(word[0])) {
            for (int i=0; i<word.size(); i++) {
                if (isupper(word[i])) {
                    return false;
                }
            }
        } else {
            if (word.size() > 1) {
                if (islower(word[1])) {
                    for (int i=1; i<word.size(); i++) {
                        if (isupper(word[i])) {
                            return false;
                        }
                    }
                } else {
                    for (int i=1; i<word.size(); i++) {
                        if (islower(word[i])) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
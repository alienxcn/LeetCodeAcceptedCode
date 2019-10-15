class Solution {
public:
    string reverseOnlyLetters(string S) {
        string temp;
        int index = 0;
        for(int i=0; i<S.size(); i++){
            if(isalpha(S[i])){
                temp = temp + S[i];
            }
        }
        reverse(temp.begin(), temp.end());
        for(int i=0; i<S.size(); i++){
            if(isalpha(S[i])){
                S[i] = temp[index++];
            }
        }
        return S;
    }
};
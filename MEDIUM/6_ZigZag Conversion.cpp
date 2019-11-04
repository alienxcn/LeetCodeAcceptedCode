class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)
            return s;
        string res;
        int n = s.size();
        int c = 2 * numRows - 2;
        for(int i=0; i<numRows; i++){
            for(int j=0; j+i<n; j+=c){
                res += s[i+j];
                if(i != 0 && i!=numRows-1 && j+c-i<n)
                    res += s[c+j-i];
            }
        }
        return res;
    }
};
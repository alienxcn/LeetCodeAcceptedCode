class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> m;
        if(numRows == 0){
            return m;
        }
        vector<int> a;
        a.push_back(1);
        m.push_back(a);
        for(int i=1; i<numRows; i++){
            vector<int> t;
            t.push_back(1);
            for(int j=1; j<i; j++){
                t.push_back(m[i-1][j-1] + m[i-1][j]);
            }
            t.push_back(1);
            m.push_back(t);
        }
        return m;
    }
};
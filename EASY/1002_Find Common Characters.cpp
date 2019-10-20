class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<string> res;
        vector<vector<int>> ans;
        for(int i=0; i<A.size(); i++){
            vector<int> temp(26, 0);
            for(int j=0; j<A[i].size(); j++){
                temp[A[i][j] - 'a']++;
            }
            ans.push_back(temp);
        }
        for(int i=0; i<26; i++){
            int m = 110;
            for(int j=0; j<ans.size(); j++){
                if(ans[j][i] < m)
                    m = ans[j][i];
            }
            string t = string(1, 'a'+i);
            while(m--)
                res.push_back(t);
        }
        return res;
    }
};
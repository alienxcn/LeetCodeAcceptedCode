class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int X = A.size();
        int Y = A[0].size();
        vector<vector<int>> res;
        for(int i=0; i<Y; i++){
            vector<int> temp;
            for(int j=0; j<X; j++){
                temp.push_back(A[j][i]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
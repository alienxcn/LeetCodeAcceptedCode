class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        vector<vector<int>> ans;
        for(int i=0; i<A.size(); i++){
            vector<int> temp;
            for(int j=A[0].size()-1; j>=0; j--){
                if(A[i][j] == 0){
                    temp.push_back(1);
                } else {
                    temp.push_back(0);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
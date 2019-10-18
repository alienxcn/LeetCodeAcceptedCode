class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> result;
        int res = 0;
        for(int i=0; i<A.size(); i++){
            if(A[i] % 2 == 0){
                ans.push_back(1);
                res += A[i];
            } else {
                ans.push_back(0);
            }
        }
        for(int i=0; i<queries.size(); i++){
            int val = queries[i][0];
            int index = queries[i][1];
            int temp = val + A[index];
            if(abs(temp) % 2 == 0){
                if(ans[index] == 1){
                    res += val;
                } else {
                    ans[index] = 1;
                    res += temp;
                }
            } else {
                if(ans[index] == 1){
                    res -= A[index];
                    ans[index] = 0;
                } else {
                    // do nothing.
                }
            }
            result.push_back(res);
            A[index] = temp;
        }
        return result;
    }
};
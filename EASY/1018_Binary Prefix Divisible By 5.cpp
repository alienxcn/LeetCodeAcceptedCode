class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        int temp = 0;
        vector<bool> res;
        for(int i=0; i<A.size(); i++){
            temp = ((temp << 1) + A[i]) % 5;
            res.push_back(temp == 0 ? true : false);
        }
        return res;
    }
};
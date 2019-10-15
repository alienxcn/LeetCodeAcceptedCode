class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
        sort(A.begin(), A.end());
        int DIS = A[A.size()-1] - A[0];
        if(DIS > 2*K){
            return DIS - 2*K;
        } else {
            return 0;
        }
    }
};
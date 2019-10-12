class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        vector<int> res;
        int sumA = 0, sumB = 0;
        for(int i=0; i<A.size(); i++){
            sumA += A[i];
        }
        for(int i=0; i<B.size(); i++){
            sumB += B[i];
        }
        for(int i=0; i<A.size(); i++){
            for(int j=0; j<B.size(); j++){
                if(sumA-A[i]+B[j] == sumB-B[j]+A[i]){
                    res.push_back(A[i]);
                    res.push_back(B[j]);
                    return res;
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        int ans = 0;
        int bns = 0;
        for(int i=0; i<A.size()-1; i++){
            if(A[i] < A[i+1]){
                ans++;
            } else if(A[i] > A[i+1]) {
                bns++;
            } else {
                ans++;
                bns++;
            }
        }
        if(ans == A.size()-1 || bns == A.size()-1)
            return true;
        else
            return false;
    }
};
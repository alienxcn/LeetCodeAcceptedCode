class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        for(int i=1; i<=3; i++){
            for(int j=0; j<A.size()-i; j++){
                if(A[j] == A[j+i])
                    return A[j];
            }
        }
        return 0;
    }
};
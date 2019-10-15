class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        if(A[0] > A[1])
            return 0;
        if(A[A.size()-2] < A[A.size()-1])
            return A.size()-1;
        for(int i=1; i<A.size()-1; i++){
            if(A[i-1] < A[i] && A[i] > A[i+1])
                return i;
        }
        return 0;
    }
};
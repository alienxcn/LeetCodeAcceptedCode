class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        if(A.size() < 3)
            return false;
        int posi = 0;
        for(int i=0; i<A.size()-1; i++){
            if(A[i+1] > A[i]){
                continue;
            } else if(A[i+1] == A[i]){
                return false;
            } else {
                posi = i;
                break;
            }
        }
        if(posi == 0)
            return false;
        for(int i=posi; i<A.size()-1; i++){
            if(A[i+1] >= A[i])
                return false;
        }
        return true;
    }
};
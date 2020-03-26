class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int res = 0, t = 0;
        sort(A.begin(), A.end());
        for(int i=1; i<A.size(); i++){
            if(A[i-1] == A[i]){
                t++;
                res -= A[i];
            } else {
                int g = min(t, A[i]-A[i-1]-1);
                res += (g*(g+1)/2+g*A[i-1]);
                t -= g;
            }
        }
        if(A.size() > 0)
            res += (t*(t+1)/2 + t*A[A.size()-1]);
        return res;
    }
};
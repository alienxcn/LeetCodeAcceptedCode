class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0;
        for(int i=0; i<A.size(); i++){
            sum += A[i];
        }
        if(sum % 3 != 0)
            return false;
        sum /= 3;
        int temp = 0;
        int res = 0;
        for(int i=0; i<A.size(); i++){
            temp += A[i];
            if(temp == sum){
                temp = 0;
                res++;
            }
        }
        if(res == 3)
            return true;
        return false;
    }
};
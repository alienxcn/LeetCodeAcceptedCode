class Solution {
public:
    int findFirstBit(int num){
        int res = 0;
        while((num & 1) == 0 && (res < 8 * sizeof(int))){
            num >>= 1;
            res++;
        }
        return res;
    }
    bool isBit1(int num, int index){
        num >>= index;
        return (num & 1);
    }
    vector<int> singleNumbers(vector<int>& nums) {
        vector<int> res;
        int temp = 0;
        for(int te : nums){
            temp = temp ^ te;
        }
        int bitIndex = findFirstBit(temp);
        int L = 0, R = 0;
        for(int te : nums){
            if(isBit1(te, bitIndex)){
                L = L ^ te;
            } else {
                R = R ^ te;
            }
        }
        res.push_back(L);
        res.push_back(R);
        return res;
    }
};
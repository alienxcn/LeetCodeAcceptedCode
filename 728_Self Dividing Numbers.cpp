class Solution {
public:
    bool test(int a){
        int t = a;
        int b = 1;
        while(a/b){
            if(a/b%10 == 0 || t % (a/b%10) != 0){
                return false;
            }
            b *= 10;
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left; i<=right; i++){
            if(test(i))
                res.push_back(i);
        }
        return res;
    }
};
class Solution {
public:
    int power(int a, int x){
        int res = 1;
        while(x--){
            res *= a;
        }
        return res;
    }
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> res;
        int A = 1, B = 1;
        int tA = x, tB = y;
        if(x != 1){
            while(tA <= bound){
                tA *= x;
                A++;
            }
        }
        if(y != 1){
            while(tB <= bound){
                tB *= y;
                B++;
            }
        }
        for(int i=0; i<=A; i++){
            for(int j=0; j<=B; j++){
                int temp = power(x, i) + power(y, j);
                if(temp <= bound && find(res.begin(), res.end(), temp) == res.end())
                    res.push_back(temp);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};
class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int a = 0, b = 0;
        int res = 0;
        for(int i=0; i<s1.size(); i++){
            if(s1[i] == 'x' && s2[i] == 'y')
                a++;
            if(s1[i] == 'y' && s2[i] == 'x')
                b++;
        }
        res += a/2 + b/2;
        a %= 2;
        b %= 2;
        if(a+b == 1)
            return -1;
        res += a+b;
        return res;
    }
};
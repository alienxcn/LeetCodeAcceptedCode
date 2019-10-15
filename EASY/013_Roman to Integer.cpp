class Solution {
public:
    int romanToInt(string s) {
        int number = 0;
        int len = s.length();
        int ans[100];
        for(int i=0;i<len;i++){
            switch(s[i]){
                case 'I': ans[i] = 1; break;
                case 'V': ans[i] = 5; break;
                case 'X': ans[i] = 10; break;
                case 'L': ans[i] = 50; break;
                case 'C': ans[i] = 100; break;
                case 'D': ans[i] = 500; break;
                case 'M': ans[i] = 1000; break;
            }
        }
        for(int i=0;i<len-1;i++){
            if(ans[i]<ans[i+1]){
                number -= ans[i];
            } else {
                number += ans[i];
            }
        }
        return number + ans[len-1];
    }
};
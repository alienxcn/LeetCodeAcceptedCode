class Solution {
public:
    int countDigitOne(int n) {
       int count = 0;
       long i = 1;
       while(n/i){
            if((n/i)%10 == 0){
                count += n/(10*i) * i;
            } else if((n/i)%10 == 1){
                count += n/(10*i) * i + n-(n/i)*i + 1;
            } else {
                count += n/(10*i) * i + i;
            }
            i = i * 10;
       }
       return count;
    }
};
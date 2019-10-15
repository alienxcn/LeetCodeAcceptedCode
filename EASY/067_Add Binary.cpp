class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        while(a.length() < b.length()){
            a = '0' + a;
        }
        while(b.length() < a.length()){
            b = '0' + b;
        }
        int len = a.length();
        for(int i=len-1; i>=0; i--){
            a[i] = (a[i]-'0') + (b[i]-'0') + carry + '0';
            if(a[i] == '2'){
                carry = 1;
                a[i] = '0';
            } else if(a[i] == '3') {
                carry = 1;
                a[i] = '1';
            } else {
                carry = 0;
            }   
        }
        if(carry){
            a = '1' + a;
        }
        return a;
    }
};
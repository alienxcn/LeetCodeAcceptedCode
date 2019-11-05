class Solution {
public:
    string intToRoman(int num) {
        string A[4] = {"", "M", "MM", "MMM"};
        string B[10] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string C[10] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string D[10] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

        int a = num/1000;
        int b = (num%1000)/100;
        int c = (num%100)/10;
        int d = (num%10)/1;

        return A[a] + B[b] + C[c] + D[d];
    }
};
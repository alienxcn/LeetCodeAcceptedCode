class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int index = digits.size() - 1;
        while(index != -1 && carry){
            digits[index] += carry;
            if(digits[index] == 10){
                digits[index] = 0;
            } else {
                carry = 0;
            }
            index--;
        }
        if(index == -1 && carry == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};
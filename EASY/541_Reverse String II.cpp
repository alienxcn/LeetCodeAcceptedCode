class Solution {
public:
    string reverseStr(string s, int k) {
        int nums = s.size();
        int rest = nums%(2*k);
        int count = nums/(2*k);
        
        for(int i=0; i<count; i++){
            reverse(s.begin()+i*2*k, s.begin()+i*2*k+k);
        }
        if(rest != 0 && rest < k){
            reverse(s.end()-rest, s.end());
        }
        if(rest >= k && rest < 2*k){
            reverse(s.end()-rest, s.end()-(rest-k));
        }
        return s;
    }
};
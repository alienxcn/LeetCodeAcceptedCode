// 首位双指针。
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        if(nums.size() == 0){
            return 0;
        }
        vector<int>::iterator P = nums.begin();
        vector<int>::iterator T = nums.end()-1;
        for(vector<int>::iterator i = nums.begin(); i!=nums.end(); i++){
            if(*i == val){
                ans++;
            }
        }
        int t = nums.size() - ans;
        while(t--){
            while(*P != val && P<T){
                P++;
            }
            while(*T == val && P<T){
                T--;
            }
            int t = *P;
            *P = *T;
            *T = t;
        }
        return nums.size() - ans;
    }
};
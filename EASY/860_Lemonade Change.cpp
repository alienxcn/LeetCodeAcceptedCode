class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int ans[3] = {0};
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5){
                ans[0]++;
            } else if(bills[i] == 10){
                if(ans[0] != 0){
                    ans[0]--;
                    ans[1]++;
                } else {
                    return false;
                }
            } else {
                if(ans[0] && ans[1]){
                    ans[2]++;
                    ans[0]--;
                    ans[1]--;
                } else if(ans[0]>=3 && !ans[1]){
                    ans[2]++;
                    ans[0]-=3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};
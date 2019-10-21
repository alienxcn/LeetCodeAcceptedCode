class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int res = 0;
        int a[60] = {0};
        for(int i=0; i<time.size(); i++){
            a[time[i] % 60]++;
            // cout << time[i] % 60 << " ";
        }
        for(int i=1; i<30; i++){
            res += a[i] * a[60-i];
        }
        res += a[0]*(a[0]-1)/2;
        res += a[30]*(a[30]-1)/2;
        return res;
    }
};
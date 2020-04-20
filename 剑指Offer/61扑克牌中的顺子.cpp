class Solution {
public:
    int same(vector<int>& nums, vector<int>& copy){
        int res = 0;
        for(int i=0; i<5; i++){
            for(int j=0; j<5; j++){
                if(copy[i] == nums[j]){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
    bool isStraight(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int _count = 0;
        for(int i:nums){
            if(i == 0)
                _count++;
        }
        vector<vector<int> > MO;
        for(int i=1; i<10; i++){
            vector<int> temp(5, 0);
            for(int j=i; j<i+5; j++){
                temp[j-i] = j;
            }
            MO.push_back(temp);
        }
        for(vector<int> i:MO){
            int te = same(nums, i);
            // cout << te << endl;
            if(te + _count == 5){
                return true;
            }
        }
        return false;
    }
};
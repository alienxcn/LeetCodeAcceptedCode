class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int sig = 0;
        int sam = nums[0];
        for(vector<int>::iterator it = nums.begin(); it!=nums.end();){
            if(*it == sam){
                sig++;
            } else {
                sam = *it;
                sig = 1;
            }
            if(sig >= 3){
                nums.erase(it);
            } else {
                it++;
            }
        }
        return nums.size();
    }
};
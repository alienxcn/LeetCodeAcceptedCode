class Solution {
public:
    static bool comp(const int& a, const int& b){
        return a>b;
    }
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> temp = nums;
        vector<string> res;
        sort(temp.begin(), temp.end(), comp);
        for(int i=0; i<nums.size(); i++){
            int t = nums[i];
            vector<int>::iterator it = find(temp.begin(), temp.end(), t);
            int cnt = it - temp.begin();
            if(cnt == 0){
                res.push_back("Gold Medal");
            } else if(cnt == 1){
                res.push_back("Silver Medal");
            } else if(cnt == 2){
                res.push_back("Bronze Medal");
            } else {
                res.push_back(to_string(cnt+1));
            }
        }
        return res;
    }
};
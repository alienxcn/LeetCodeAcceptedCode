class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> temp;
        res.push_back(temp);
        for(int k=1; k<=nums.size(); k++){
            temp.clear();
            for(int i=1; i<=k; i++)
                temp.push_back(i);
            temp.push_back(nums.size()+1);

            int it = 0;
            while(it < k){
                vector<int> t;
                for(int i=0; i<k; i++)
                    t.push_back(nums[temp[i]-1]);
                res.push_back(t);
                it = 0;
                while(it < k && temp[it+1] == temp[it] + 1){
                    temp[it] = 1 + it;
                    it++;
                }
                temp[it]++;
            }
        }
        return res;
    }
};
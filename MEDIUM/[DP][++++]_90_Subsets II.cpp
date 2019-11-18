// 关联77 78 90
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        set<vector<int>> kms;
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
                sort(t.begin(), t.end());
                kms.insert(t);
                it = 0;
                while(it < k && temp[it+1] == temp[it] + 1){
                    temp[it] = 1 + it;
                    it++;
                }
                temp[it]++;
            }
        }
        for(set<vector<int>>::iterator it = kms.begin(); it != kms.end(); it++){
            res.push_back(*it);
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;
    void dfs(vector<int>& nums, int len, int it){
        if(len == nums.size()){
            return;
        }
        int fa = INT_MIN;
        for(int i=it; i<nums.size(); i++){
            if(fa == nums[i])
                continue;
            fa = nums[i];
            temp.push_back(nums[i]);
            res.push_back(temp);
            dfs(nums, len+1, i+1);
            temp.erase(temp.end()-1);
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        res.push_back(temp);
        dfs(nums, 0, 0);
        return res;
    }
};
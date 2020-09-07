class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> maps;
        vector<int> res;
        for (auto item:nums) {
            if (maps.count(item) == 0) {
                maps[item] = 1;
            } else {
                maps[item]++;
            }
        }
        vector<pair<int,int> > vec(maps.begin(), maps.end());
        sort(vec.begin(), vec.end(), [](const pair<int,int>& x, const pair<int, int>& y) -> int {
            return x.second > y.second;
        });
        for (int i=0; i<k; i++) {
            res.push_back(vec[i].first);
        }
        return res;
    }
};
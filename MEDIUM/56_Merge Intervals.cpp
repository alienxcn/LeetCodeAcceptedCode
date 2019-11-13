class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>&a, const vector<int>&b) -> int {
            if(a[0] != b[0])
                return a[0] < b[0];
            else
                return a[1] > b[1];
        });
        vector<vector<int>> res;
        for(int i=0; i<intervals.size(); i++){
            if(res.size() == 0 || res[res.size()-1][1] < intervals[i][0]){
                res.push_back(intervals[i]);
            } else {
                res[res.size()-1][1] = max(res[res.size()-1][1], intervals[i][1]);
            }
        }
        return res;
    }
};
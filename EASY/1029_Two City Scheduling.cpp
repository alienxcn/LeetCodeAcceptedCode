class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        vector<int> ans;
        for(int i=0; i<costs.size(); i++){
            sum += costs[i][0];
            ans.push_back(costs[i][1]-costs[i][0]);
        }
        sort(ans.begin(), ans.end());
        for(int i=0; i<costs.size()/2; i++){
            sum += ans[i];
        }
        return sum;
    }
};
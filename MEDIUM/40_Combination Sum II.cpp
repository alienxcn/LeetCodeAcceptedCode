class Solution {
public:
    vector<vector<int>> res;
    void func(vector<int>& candidates, int rest, int posi, vector<int>& temp){
        if(rest <= 0 || posi == candidates.size()){
            if(rest == 0){
                res.push_back(temp);
            }
            return;
        }
        temp.push_back(candidates[posi]);
        func(candidates, rest-candidates[posi], posi+1, temp);
        temp.erase(temp.end()-1);
        
        while(posi < candidates.size()-1 && candidates[posi+1] == candidates[posi])
            posi++;
        func(candidates, rest, posi+1, temp);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        if(candidates.size() == 0)
            return res;
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        func(candidates, target, 0, temp);
        return res;
    }
};
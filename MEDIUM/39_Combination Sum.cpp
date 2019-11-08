class Solution {
public:
    vector<vector<int>> res;
    void func(vector<int>& spe, vector<int>& candidates, int posi, int rest){
        if(rest <= 0){
            if(rest == 0)
                res.push_back(spe);
            return;
        }
        for(int i=posi; i<candidates.size(); i++){
            spe.push_back(candidates[i]);
            func(spe, candidates, i, rest-candidates[i]);
            spe.erase(spe.end()-1);
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> spe;
        func(spe, candidates, 0, target);
        return res;
    }
};
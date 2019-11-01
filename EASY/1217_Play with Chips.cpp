class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int a[2] = {0};
        for(int i=0; i<chips.size(); i++){
            a[chips[i]%2]++;
        }
        return min(a[0], a[1]);
    }
};
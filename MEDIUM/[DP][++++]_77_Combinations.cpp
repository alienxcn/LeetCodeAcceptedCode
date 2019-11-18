// 关联77 78 90
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        for(int i=1; i<=k; i++)
            temp.push_back(i);
        temp.push_back(n+1);

        int it = 0;
        while(it < k){
            vector<int> t;
            for(int i=0; i<k; i++)
                t.push_back(temp[i]);
            res.push_back(t);
            it = 0;
            while(it < k && temp[it+1] == temp[it] + 1){
                temp[it] = 1 + it;
                it++;
            }
            temp[it]++;
        }
        return res;
    }
};
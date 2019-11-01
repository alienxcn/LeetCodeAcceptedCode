class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int ans[2010] = {0};
        int tmp = 0;
        set<int> res;
        for(int i=0; i<arr.size(); i++){
            ans[arr[i]+1000]++;
        }
        for(int i=0; i<2010; i++){
            if(ans[i] != 0){
                res.insert(ans[i]);
                tmp++;
            }
        }
        return res.size() == tmp;
    }
};
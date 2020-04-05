class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int> res;
        int cnt = 0;
        for(char i : seq){
            if(i == '('){
                cnt += 1;
                res.push_back(cnt%2);
            } else {
                res.push_back(cnt%2);
                cnt-=1;
            }
        }
        return res;
    }
};
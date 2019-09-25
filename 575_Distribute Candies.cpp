class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        set<int> s;
        for(int i=0; i<candies.size(); i++){
            s.insert(candies[i]);
        }
        int len = s.size();
        int res = 0;
        if(len < candies.size()/2){
            res = len;
        } else {
            res = candies.size()/2;
        }
        return res;
    }
};
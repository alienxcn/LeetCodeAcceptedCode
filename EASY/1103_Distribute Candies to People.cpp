class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res;
        for(int i=0; i<num_people; i++){
            res.push_back(0);
        }
        int candy = 1;
        int count = 0;
        while(candies){
            int temp = candies >= candy ? candy++ : candies;
            res[count++ % num_people] += temp;
            candies -= temp;
        }
        return res;
    }
};
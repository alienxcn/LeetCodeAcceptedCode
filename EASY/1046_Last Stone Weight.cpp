class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int, vector<int>, less<int> > qu;
        for(int i=0; i<stones.size(); i++){
            qu.push(stones[i]);
        }
        while(!qu.empty()){
            int x = qu.top();
            qu.pop();
            if(qu.empty()){
                return x;
            }
            int y = qu.top();
            qu.pop();
            if(x != y){
                qu.push(abs(x-y));
            }
        }
        return 0;
    }
};
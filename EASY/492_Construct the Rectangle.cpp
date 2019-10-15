class Solution {
public:
    vector<int> constructRectangle(int area) {
        int W = sqrt(area);
        int L = 0;
        vector<int> res;
        while(W){
            if(area%W == 0){
                L = area/W;
                break;
            } else {
                W--;
            }
        }
        res.push_back(L);
        res.push_back(W);
        return res;
    }
};
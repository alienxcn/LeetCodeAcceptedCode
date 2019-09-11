class Solution {
public:
    int findRes(int a, vector<int> heaters){
        int len = heaters.size();
        if(find(heaters.begin(), heaters.end(), a) == heaters.end()){
            heaters.push_back(a);
            sort(heaters.begin(), heaters.end());
            vector<int>::iterator k = find(heaters.begin(), heaters.end(), a);
            if(k == heaters.begin()){
                return *(k+1) - *k;
            } else if(k == heaters.end()-1){
                return *k - *(k-1);
            } else {
                return min(*(k+1) - *k, *k - *(k-1));
            }
        }
        return 0;
    }
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        int res = -1;
        int len = houses.size();
        for(int i=0; i<len; i++){
            int t = findRes(houses[i], heaters);
            if(t > res){
                res = t;
            }
        }
        return res;
    }
};
// 暴力
class Solution {
public:
    int distan(int x1, int y1, int x2, int y2){
        return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    }
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int tot = points.size();
        int res = 0;
        for(int i=0; i<tot; i++){
            map<int, int> m;
            for(int j=0; j<tot; j++){
                if(i!=j)
                    m[distan(points[i][0], points[i][1], points[j][0], points[j][1])]++;
            }
            for(map<int,int>::iterator q=m.begin(); q!=m.end(); q++){
                res += q->second*(q->second-1);
            }
        }
        return res;
    }
};
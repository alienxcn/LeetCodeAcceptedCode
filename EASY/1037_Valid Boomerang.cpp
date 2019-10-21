class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double x0 = points[0][0];
        double y0 = points[0][1];
        double x1 = points[1][0];
        double y1 = points[1][1];
        double x2 = points[2][0];
        double y2 = points[2][1];
        
        double a = sqrt((x1-x0)*(x1-x0) + (y1-y0)*(y1-y0));
        double b = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
        double c = sqrt((x2-x0)*(x2-x0) + (y2-y0)*(y2-y0));
        
        return (a+b>c && abs(a-b)<c);
    }
};
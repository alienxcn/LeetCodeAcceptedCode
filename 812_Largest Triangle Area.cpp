class Solution {
public:
    double getLength(int x1, int y1, int x2, int y2){
        return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    }
    double getSquare(double a, double b, double c){
        double p = (a+b+c)/2;
        return sqrt(p*(p-a)*(p-b)*(p-c));
    }
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0;
        for(int i=0; i<points.size()-2; i++){
            for(int j=i+1; j<points.size()-1; j++){
                for(int k=j+1; k<points.size(); k++){
                    double a = getLength(points[i][0], points[i][1], points[j][0], points[j][1]);
                    double b = getLength(points[j][0], points[j][1], points[k][0], points[k][1]);
                    double c = getLength(points[k][0], points[k][1], points[i][0], points[i][1]);
                    res = max(res, getSquare(a, b, c));
                }
            }
        }
        return res;
    }
};
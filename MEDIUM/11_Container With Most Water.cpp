class Solution {
public:
    int maxArea(vector<int>& height) {
        int L = 0;
        int R = height.size()-1;
        int S = (R-L) * min(height[L],height[R]);
        while(L<R){
            if(height[L] <= height[R])
                L++;
            else
                R--;
            S = max(S, (R-L) * min(height[L],height[R]));
        }
        return S;
    }
};
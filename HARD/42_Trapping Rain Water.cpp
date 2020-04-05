class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0)
            return 0;
        int res = 0;
        int len = height.size();
        vector<int> L(len), R(len);

        L[0] = height[0];
        R[len-1] = height[len-1];

        for(int i=1; i<len; i++){
            L[i] = max(height[i], L[i-1]);
        }
        for(int i=len-2; i>=0; i--){
            R[i] = max(height[i], R[i+1]);
        }
        for(int i=1; i<len-1; i++){
            res += min(L[i], R[i]) - height[i];
        }
        return res;
    }
};
class Solution {
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target){
        if(matrix.size() == 0)
            return false;
        int m = matrix.size();
        int n = matrix[0].size();

        int L = 0, R = m*n-1;
        int mid, ptr;
        while(L <= R){
            mid = (L+R)/2;
            if(target == matrix[mid/n][mid%n]){
                return true;
            } else {
                if(target < matrix[mid/n][mid%n])
                    R = mid - 1;
                else
                    L = mid + 1;
            }
        }
        return false;
    }
};
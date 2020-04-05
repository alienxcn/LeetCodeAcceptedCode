class Solution {
public:
    void AdjustDown(vector<int>& A, int root, int n){
        int parent = root;
        int L = parent * 2 + 1;
        int R = L + 1;
        int temp = L;
        while(temp < n){
            if(R<n && A[R]>A[L]){
                temp = R;
            }
            if(A[temp] > A[parent]){
                swap(A[temp], A[parent]);
                parent = temp;
                temp = parent * 2 + 1;
                L = temp;
                R = temp + 1;
            } else {
                break;
            }
        }
    }
    void HeapSort(vector<int>& A){
        int n = A.size();
        for(int i=(n-2)/2; i>=0; i--){
            AdjustDown(A, i, n);
        }
        int end = n-1;
        while(end>0){
            swap(A[0],A[end]);
            AdjustDown(A, 0, end);
            end--;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        HeapSort(nums);
        return nums;
    }
};
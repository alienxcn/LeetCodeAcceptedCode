// 在归并排序的基础上添加一点代码。

class Solution {
public:
    int merge(vector<int>& a, int L, int R, vector<int>& tmp){
        if(L >= R){
            return 0;
        }
        int mid = L + (R-L)/2;
        int Left = merge(a, L, mid, tmp);
        int Right = merge(a, mid+1, R, tmp);

        int begin1 = L;
        int end1 = mid;
        int begin2 = mid+1;
        int end2 = R;
        int index = L;
        int count = 0;

        while(begin1 <= end1 && begin2 <= end2){
            if(a[begin1] <= a[begin2]){
                tmp[index++] = a[begin1++];
            } else {
                count += mid - begin1 + 1;
                tmp[index++] = a[begin2++];
            }
        }
        while(begin1 <= end1)
            tmp[index++] = a[begin1++];
        while(begin2 <= end2)
            tmp[index++] = a[begin2++];

        index = L;
        while(index <= R){
            a[index] = tmp[index];
            index++;
        }

        return Left + Right + count;
    }

    int reversePairs(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        vector<int> tmp(nums.size());
        return merge(nums, 0, nums.size()-1, tmp);
    }
};
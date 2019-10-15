class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(vector<int>::iterator i=nums2.begin(); i!=nums2.end(); i++){
            nums1[m++] = *i;
        }
        sort(nums1.begin(), nums1.end());
    }
};
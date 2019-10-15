class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        int len = nums1.size();
        for(int i=0; i<len; i++){
            vector<int>::iterator t = find(nums2.begin(), nums2.end(), nums1[i]);
            if(t != nums2.end()){
                res.push_back(nums1[i]);
                nums2.erase(t);
            }
        }
        return res;
    }
};
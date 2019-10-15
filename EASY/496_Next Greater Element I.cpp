// 模拟
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int nums1_length = nums1.size();
        int nums2_length = nums2.size();
        vector<int> res;
        for(int i=0; i<nums1_length; i++){
            for(int j=0; j<nums2_length; j++){
                if(nums1[i] == nums2[j]){
                    for(int p=j+1; p<nums2_length; p++){
                        if(nums2[p]>nums1[i]){
                            res.push_back(nums2[p]);
                            break;
                        }
                    }
                    if(res.size() == i){
                        res.push_back(-1);
                    }
                    break;
                }
            }
        }
        return res;
    }
};
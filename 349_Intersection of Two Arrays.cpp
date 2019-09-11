class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        set<int> t;
        int len1 = nums1.size();
        int len2 = nums2.size();
        vector<int> res;
        for(int i=0; i<len1; i++){
            s.insert(nums1[i]);
        }
        for(int i=0; i<len2; i++){
            t.insert(nums2[i]);
        }
        for(set<int>::iterator i = t.begin(); i != t.end(); i++){
            if(s.count(*i)){
                res.push_back(*i);
            }
        }
        return res;
    }
};
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> tmp;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 2 == 1){
                tmp.push_back(i);
            }
        }
        if(tmp.size() < k)
            return 0;
        int res = 0;
        for(int i=0; i<tmp.size()-k+1; i++){
            int start = tmp[i];
            int end = tmp[i+k-1];
            
            int t1 = start - 1;
            while(t1 >= 0 && nums[t1] % 2 == 0){
                t1--;
            }
            t1++;
            
            int t2 = end + 1;
            while(t2 < nums.size() && nums[t2] % 2 == 0){
                t2++;
            }
            t2--;
            
            cout << t1 << " " << t2 << endl;
            res += (1 + (start - t1) + (t2 - end) + (start - t1)*(t2 - end));
        }
        return res;
    }
};
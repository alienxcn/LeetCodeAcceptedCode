class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int a[50000];
        for(int i=0; i<50000; i++){
            a[i] = 0;
        }
        for(int i=0; i<nums.size(); i++){
            a[nums[i]]++;
        }
        vector<int> target;
        int m = -1;
        for(int i=0; i<50000; i++){
            if(a[i] > m){
                m = a[i];
                target.clear();
                target.push_back(i);
            }
            if(a[i] == m)
                target.push_back(i);
        }
        int res = 50000;
        for(int p=0; p<target.size(); p++){
            int L = 0;
            int R = 0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] == target[p]){
                    L = i;
                    break;
                }
            }
            for(int i=nums.size()-1; i>=0; i--){
                if(nums[i] == target[p]){
                    R = i;
                    break;
                }
            }
            cout << target[p] << " " << L << " " << R << endl;
            res = min(res, R-L+1);
        }
        return res;
    }
};
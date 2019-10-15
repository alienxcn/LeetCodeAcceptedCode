class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int> > ans;
    int ki;
public:
    KthLargest(int k, vector<int>& nums) {
        ki = k;
        sort(nums.begin(), nums.end());
        int t = nums.size();
        int len = max(0, t-k);
        for(int i=t-1; i>=len; i--){
            ans.push(nums[i]);
        }
    }
    
    int add(int val) {
        if(ki > ans.size()){
            ans.push(val);
        } else {
            if(val > ans.top()){
                ans.pop();
                ans.push(val);
            }
        }
        return ans.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
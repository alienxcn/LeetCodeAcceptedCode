class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        vector<int> res;
        if(k == 0)
            return res;
        priority_queue<int, vector<int>, less<int> > q;
        for(int i=0; i<arr.size(); i++){
            if(q.size() < k){
                q.push(arr[i]);
            } else {
                int temp = q.top();
                if(temp > arr[i]){
                    q.pop();
                    q.push(arr[i]);
                }
            }
        }
        while(!q.empty()){
            res.push_back(q.top());
            q.pop();
        }
        return res;
    }
};
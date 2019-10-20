class Solution {
public:
    int largestSumAfterKNegations(vector<int>& A, int K) {
        priority_queue<int, vector<int>, greater<int> > res;
        for(int i=0; i<A.size(); i++)
            res.push(A[i]);
        while(K--){
            int t = res.top();
            res.pop();
            res.push(t * -1);
        }
        int ans = 0;
        while(!res.empty()){
            ans += res.top();
            res.pop();
        }
        return ans;
    }
};
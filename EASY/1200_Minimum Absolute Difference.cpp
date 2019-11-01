class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int tmp = 1000000;
        for(int i=0; i<arr.size()-1; i++){
            tmp = min(tmp, arr[i+1] - arr[i]);
        }
        for(int i=0; i<arr.size()-1; i++){
            if(arr[i+1] - a[i] == tmp){
                vector<int> tt;
                tt.push_back(arr[i]);
                tt.push_back(arr[i+1]);
                res.push_back(tt);
            }
        }
        return res;
    }
};
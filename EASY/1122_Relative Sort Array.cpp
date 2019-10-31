class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int tmp[1010] = {0};
        vector<int> res;
        for(int i=0; i<arr1.size(); i++){
            tmp[arr1[i]]++;
        }
        for(int i=0; i<arr2.size(); i++){
            for(int j=0; j<tmp[arr2[i]]; j++){
                res.push_back(arr2[i]);
            }
            tmp[arr2[i]] = 0;
        }
        for(int i=0; i<=1000; i++){
            for(int j=0; j<tmp[i]; j++)
                res.push_back(i);
        }
        return res;
    }
};
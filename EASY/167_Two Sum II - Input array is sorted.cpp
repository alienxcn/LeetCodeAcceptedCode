class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> m;
        int p = 0, q = numbers.size()-1;
        while(numbers[p] + numbers[q] != target){
            if(numbers[p] + numbers[q] > target){
                q--;
            }
            if(numbers[p] + numbers[q] < target){
                p++;
            }
        }
        m.push_back(p+1);
        m.push_back(q+1);
        return m;
    }
};
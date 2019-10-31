class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp;
        int count = 0;
        for(int i=0; i<arr.size(); i++){
            temp.push_back(count);
            if(arr[i] == 0)
                count++;
        }
        for(int i=arr.size()-1; i>=0; i--){
            if(i+temp[i] < arr.size())
                arr[i+temp[i]] = arr[i];
            if(temp[i] != 0)
                arr[i] = 0;
        }
    }
};
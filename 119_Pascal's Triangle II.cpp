class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> m;
        m.push_back(1);
        int index = 1;
        while(rowIndex--){
            int tmp = m[0];
            for(int i=1; i<index; i++){
                int t = m[i] + tmp;
                tmp = m[i];
                m[i] = t;
            }
            m.push_back(1);
            index++;
        }
        return m;
    }
};
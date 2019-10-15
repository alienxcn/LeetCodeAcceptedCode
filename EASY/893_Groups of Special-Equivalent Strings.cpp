class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        set<string> ans;
        for(int i=0; i<A.size(); i++){
            string temp = A[i];
            string a, b;
            for(int j=0; j<temp.size(); j+=2){
                a = a + temp[j];
                if(j+1 < temp.size())
                    b = b + temp[j+1];
            }
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            int index = 0;
            for(int j=0; j<temp.size(); j+=2){
                temp[j] = a[index];
                if(j+1 < temp.size())
                    temp[j+1] = b[index];
                index++;
            }
            ans.insert(temp);
        }
        return ans.size();
    }
};
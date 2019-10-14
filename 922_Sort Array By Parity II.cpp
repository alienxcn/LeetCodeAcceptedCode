class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> t1;
        vector<int> t2;
        for(int i=0; i<A.size(); i++){
            if(A[i] % 2 == 0){
                t1.push_back(A[i]);
            } else {
                t2.push_back(A[i]);
            }
        }
        vector<int> temp;
        vector<int>::iterator it1 = t1.begin();
        vector<int>::iterator it2 = t2.begin();
        for(int i=0; i<A.size(); i++){
            if(i % 2 == 0){
                temp.push_back(*it1);
                it1++;
            } else {
                temp.push_back(*it2);
                it2++;
            }
        }
        return temp;
    }
};
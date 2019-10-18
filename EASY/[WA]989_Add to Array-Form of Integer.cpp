class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> T;
        int add = 0;
        while(K){
            T.push_back(K%10);
            K/=10;
        }
        reverse(A.begin(), A.end());
        if(A.size() < T.size()){
            for(int i=0; i<T.size()-A.size(); i++)
                A.push_back(0);
        }
        for(int i=0; i<T.size(); i++){
            A[i] += T[i];
        }
        for(int i=0; i<A.size(); i++){
            if(A[i] >= 10){
                if(i+1 < A.size())
                    A[i+1] += A[i]/10;
                else
                    A.push_back(A[i]/10);
                A[i] = A[i] % 10;
            }
        }
        reverse(A.begin(), A.end());
        return A;
    }
};
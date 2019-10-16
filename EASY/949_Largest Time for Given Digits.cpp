class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        vector<string> B;
	    sort(A.begin(), A.end());
        do {
            string temp;
            if((A[0] <= 2 && A[1] <= 3 && A[2] <= 5) || (A[0] <= 1 && A[2] <= 5)) {
                temp = to_string(A[0]) + to_string(A[1]) + ":" + to_string(A[2]) + to_string(A[3]);
                B.push_back(temp);
            }
        } while(next_permutation(A.begin(), A.end()));
        sort(B.begin(), B.end(), [](const string& x, const string& y) -> int {
           if(x[0] == y[0]){
               if(x[1] == y[1]){
                   if(x[3] == y[3]){
                       return x[4] > y[4];
                   } else {
                       return x[3] > y[3];
                   }
               } else {
                   return x[1] > y[1];
               }
           } else {
               return x[0] > y[0];
           }
        });
        if(B.size() == 0)
            return "";
        else
            return B[0];
    }
};
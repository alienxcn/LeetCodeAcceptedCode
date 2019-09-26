class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        vector<vector<int>> N{M};
        for(int i=0; i<M.size(); i++){
            for(int j=0; j<M[0].size(); j++){
                int a = M[i][j];
                int b = 1;
                if(i-1 >=0){
                    a += M[i-1][j];
                    b++;
                }
                if(i-1>=0 && j+1<M[0].size()){
                    a += M[i-1][j+1];
                    b++;
                }
                if(j+1<M[0].size()){
                    a += M[i][j+1];
                    b++;
                }
                if(i+1<M.size() && j+1<M[0].size()){
                    a += M[i+1][j+1];
                    b++;
                }
                if(i+1<M.size()){
                    a += M[i+1][j];
                    b++;
                }
                if(i+1<M.size() && j-1>=0){
                    a += M[i+1][j-1];
                    b++;
                }
                if(j-1>=0){
                    a += M[i][j-1];
                    b++;
                }
                if(i-1>=0 && j-1 >=0){
                    a += M[i-1][j-1];
                    b++;
                }
                // cout << a  << " " << b << endl;
                N[i][j] = a/b;
            }
        }
        return N;
    }
};
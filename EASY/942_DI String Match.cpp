class Solution {
public:
    vector<int> diStringMatch(string S) {
        int N = S.size();
        vector<int> res;
        int L = 0, R = 0;
        for(int i=0; i<=N; i++)
            res.push_back(i);
        for(int i=0; i<N;){
            if(S[i] == 'D'){
                L = i++;
                R = i;
                while(i<N && S[i] == 'D'){
                    R = ++i;
                }
                cout << L << " " << R << endl;
                sort(res.begin()+L, res.begin()+R+1, [](const int& x, const int& y) -> int {
                    return x > y;
                });
            } else {
                i++;
            }
        }
        return res;
    }
};
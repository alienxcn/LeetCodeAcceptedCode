class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ch(26, 0);
        vector<pair<pair<int, int>, int> > res;

        for (auto item:S)
            ch[item-'a']++;
        for (int i=0; i<26; i++) {
            if (ch[i]) {
                char t = i + 'a';
                int L = S.find(t);
                int R = S.rfind(t);
                res.push_back(make_pair(make_pair(L, R), R-L));
            }
        }
        sort(res.begin(), res.end(), [](const pair<pair<int, int>, int> &x, const pair<pair<int, int>, int> &y) -> int {
            return x.second > y.second;
        });
        
        vector<pair<int, int> > vec;
        for (auto item:res) {
            int L = item.first.first;
            int R = item.first.second;
            int sign = 0;
            for (auto &kls:vec) {
                int LL = kls.first;
                int RR = kls.second;

                if (LL < L && R < RR) {
                    sign = 0;
                    break;
                }
                if (L > RR || R < LL) {
                    sign = 1;
                }
                if (LL < L && L < RR) {
                    sign = 0;
                    kls = make_pair(LL, R);
                    break;
                }
                if (LL < R && R < RR) {
                    sign = 0;
                    kls = make_pair(L, RR);
                    break;
                }
            }
            if (!vec.size() || sign == 1) {
                // cout << "PUSH " << L << " " << R << endl;
                vec.push_back(make_pair(L,R));
            }
        }

        sort(vec.begin(), vec.end(), [](const pair<int, int> &x, const pair<int, int> &y) -> int {
            return x.first < y.first;
        });

        vector<int> result;
        for (auto item:vec) {
            result.push_back(item.second-item.first+1);
        }
        return result;
    }
};
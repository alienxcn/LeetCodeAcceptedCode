// 全排列函数 next_permutation。
class Solution {
public:
    int hour = 0;
    int minute = 0;
    bool check(vector<int> vec){
        int a = vec[0]*8 + vec[1]*4 + vec[2]*2 + vec[3];
        int b = vec[4]*32 + vec[5]*16 + vec[6]*8 + vec[7]*4 + vec[8]*2 + vec[9];
        if(a<12 && b<60){
            hour = a;
            minute = b;
            return true;
        }
        return false;
    }
    vector<string> readBinaryWatch(int num) {
        vector<int> vec;
        vector<string> res;
        int t = 10 - num;
        while(t--){
            vec.push_back(0);
        }
        while(num--){
            vec.push_back(1);
        }
        do{
            if(check(vec)){
                res.push_back(to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute));
            }
        }while(next_permutation(vec.begin(), vec.end()));
        return res;
    }
};
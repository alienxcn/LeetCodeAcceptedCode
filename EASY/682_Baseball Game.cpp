class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> ans;
        int res = 0;
        for(int i=0; i<ops.size(); i++){
            cout << ans.size() << endl;
            if(ops[i].compare("C") == 0){
                res -= ans.top();
                ans.pop();
            } else if(ops[i].compare("D") == 0){
                int t = ans.top() * 2;
                ans.push(t);
                res += t;
            } else if(ops[i].compare("+") == 0){
                int t1 = ans.top();
                ans.pop();
                int t2 = ans.top();
                ans.push(t1);
                ans.push(t1 + t2);
                res += (t1 + t2);
            } else {
                ans.push(stoi(ops[i]));
                res += stoi(ops[i]);
            }
        }
        return res;
    }
};
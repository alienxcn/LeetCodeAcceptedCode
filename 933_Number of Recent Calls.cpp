class RecentCounter {
private:
    vector<int> history;
    int L = 0;
    int R = 0;
public:
    RecentCounter() {
        L = 0;
        R = 0;
    }
    
    int ping(int t) {
        history.push_back(t);
        R = history.size() - 1;
        while(history[R] - 3000 > history[L])
            L++;
        return R - L + 1;
    }
};
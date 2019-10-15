// 除了使用STL，使用双指针速度更快。

class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        // 大根堆
        priority_queue<int, vector<int>, less<int>> qg, qs;
        for(int i=0; i<g.size(); i++){
            qg.push(g[i]);
        }
        for(int i=0; i<s.size(); i++){
            qs.push(s[i]);
        }
        while(!qg.empty() && !qs.empty()){
            if(qs.top() >= qg.top()){
                qg.pop();
                qs.pop();
                count++;
            } else {
                qg.pop();
            }
        }
        return count;
    }
};
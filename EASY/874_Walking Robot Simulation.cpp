class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        // 注意看清题目问的是啥。
        // 返回的是最大距离，不是最后的距离。
        /*
        commands.erase(commands.end()-1);
        commands.push_back(4);
        commands.push_back(-2);
        commands.push_back(4);
        vector<int> a;
        a.push_back(2);
        a.push_back(4);
        obstacles.push_back(a);
        */
        pair<int, int> position(0, 0);
        set<pair<int, int>> obs;
        int direct = 0;
        int res = 0;
        int D[4][2] = {
            0, 1,
            1, 0,
            0, -1,
            -1, 0
        };
        for(int i=0; i<obstacles.size(); i++){
            pair<int, int> temp(obstacles[i][0], obstacles[i][1]);
            obs.insert(temp);
        }
        for(int i=0; i<commands.size(); i++){
            if(commands[i] == -1){
                direct = (direct + 1) % 4;
            } else if(commands[i] == -2){
                direct = (direct + 3) % 4;
            } else {
                int step = commands[i];
                while(step--){
                    pair<int, int> nextPosi(position.first + D[direct][0], position.second + D[direct][1]);
                    if(obs.count(nextPosi) == 0){
                        position = nextPosi;
                        res = max(res, position.first * position.first + position.second * position.second);
                    }
                    else
                        break;
                }
            }
        }
        return res;
    }
};
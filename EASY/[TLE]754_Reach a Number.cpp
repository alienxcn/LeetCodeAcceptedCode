class Solution {
public:
    struct node{
        int level;
        int val;
        node(int a, int b){
            level = a;
            val = b;
        }
    };
    int reachNumber(int target) {
        queue<node> ans;
        ans.push(node(0, 0));
        while(!ans.empty()){
            node temp = ans.front();
            if(temp.val == target){
                return temp.level;
            }
            for(int i=-1; i<2; i+=2){
                ans.push(node(temp.level+1, temp.val + i*(temp.level + 1)));
            }
            ans.pop();
        }
        return 0;
    }
};
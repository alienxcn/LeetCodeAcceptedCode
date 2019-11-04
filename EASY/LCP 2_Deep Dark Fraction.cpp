class Solution {
public:
    int gcd(int a, int b){
        return b == 0 ? a : gcd(b, a%b);
    }
    int lcm(int a, int b){
        return a*b/gcd(a,b);
    }
    struct node{
        int x, y;
        node(){
            x = 0;
            y = 1;
        }
        node(int a, int b){
            x = a;
            y = b;
        }
    };
    struct node add(struct node c1,struct node c2){
        int y = lcm(c1.y, c2.y);
        int x = c1.x*(y/c1.y) + c2.x*(y/c2.y);
        return node(x, y);
    }
    struct node rev(struct node c){
        if(c.x == 0)
            return node(0, 1);
        return node(c.y, c.x);
    }
    struct node func(vector<int>& cont, int i){
        if(i == cont.size())
            return node(0, 1);
        return add(node(cont[i], 1), rev(func(cont, i+1)));
    }
    vector<int> fraction(vector<int>& cont) {
        vector<int> res;
        node tmp = func(cont, 0);
        // cout << tmp.x << " " << tmp.y << endl;
        res.push_back(tmp.x);
        res.push_back(tmp.y);
        return res;
    }
};
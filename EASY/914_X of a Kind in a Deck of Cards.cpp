class Solution {
public:
    int gcd(int x, int y) {
        return x == 0 ? y : gcd(y%x, x);
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        int a[10000] = {0};
        for(int i=0; i<deck.size(); i++){
            a[deck[i]]++;
        }
        
        int g = -1;
        for(int i=0; i<10000; i++){
            if(a[i] > 0){
                if(g == -1)
                    g = a[i];
                else
                    g = gcd(g, a[i]);
            }
        }
        return g > 1;
    }
};
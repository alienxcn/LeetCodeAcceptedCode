class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int a[5] = {0};
        for(int i=0; i<text.size(); i++){
            if(text[i] == 'b')
                a[0]++;
            else if(text[i] == 'a')
                a[1]++;
            else if(text[i] == 'l')
                a[2]++;
            else if(text[i] == 'o')
                a[3]++;
            else if(text[i] == 'n')
                a[4]++;
        }
        return min(a[0], min(a[1], min(a[2]/2, min(a[3]/2, a[4]))));
    }
};
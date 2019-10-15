class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;        
        y = x ^ y;
        while(y != 0){
            y &= y -1;
            count++;
        }    
        return count; 
    }
};
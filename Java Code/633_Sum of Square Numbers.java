class Solution {
    public boolean judgeSquareSum(int c) {
        int L = (int)Math.sqrt(c/2)-1;
        if(L < 0)
            L = 0;
        for(int i=L; i<=(int)Math.sqrt(c); i++){
            if((int)Math.sqrt(c-i*i) * (int)Math.sqrt(c-i*i) == c-i*i){
                return true;
            }
        }
        return false;
    }
}
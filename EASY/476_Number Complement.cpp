class Solution {
public:
    int findComplement(int num) {
        int j = num;
        unsigned int  k =1;
        int allNum =0;
        while(j>0)
        {
            allNum += k;
            j-=k;
            k*=2;
           
        }
        return allNum^num;
    }
};

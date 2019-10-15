class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> temp{nums};
        sort(temp.begin(), temp.end());
        int MIN = temp[0];
        int MAX = temp[temp.size()-1];
        vector<int>::iterator L = nums.begin();
        vector<int>::iterator R = nums.end()-1;
        vector<int>::iterator LL = temp.begin();
        vector<int>::iterator RR = temp.end()-1;
        
        bool LC = true;
        bool RC = true;
        while(L<R && (LC || RC)){
            if(*L == *LL && LC){
                L++;
                LL++;
            } else {
                LC = false;
            }
            if(*R == *RR && RC){
                R--;
                RR--;
            } else {
                RC = false;
            }
        }       
        
        if(L<R)
            return R-L+1;
        else
            return 0;
    }
};
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 1){
                if(i-1 >= 0){
                    flowerbed[i-1] = 2;
                }
                if(i+1 < flowerbed.size()){
                    flowerbed[i+1] = 2;
                }
            }
        }
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                if(i-1 >= 0){
                    flowerbed[i-1] = 2;
                }
                if(i+1 < flowerbed.size()){
                    flowerbed[i+1] = 2;
                }
            }
        }
        int res = 0;
        for(int i=0; i<flowerbed.size(); i++){
            if(flowerbed[i] == 0){
                res++;
            }
        }
        if(res >= n){
            return true;
        } else {
            return false;
        }
    }
};
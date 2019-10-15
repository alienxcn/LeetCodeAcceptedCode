class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int res = 0;
        for(int i=0; i<seats.size(); i++){
            if(seats[i] == 1){
                int t = 1, sig = 2;
                while(i+t < seats.size() && seats[i+t] != 1){
                    if(seats[i+t] == 0){
                        seats[i+t] = sig;
                    } else {
                        if(seats[i+t] > sig){
                            seats[i+t] = sig;
                        }
                    }
                    sig++;
                    t++;
                }
                t = 1;
                sig = 2;
                while(i-t >= 0 && seats[i-t] != 1){
                    if(seats[i-t] == 0){
                        seats[i-t] = sig;
                    } else {
                        if(seats[i-t] > sig){
                            seats[i-t] = sig;
                        }
                    }
                    sig++;
                    t++;
                }
            }
        }
        for(int i=0; i<seats.size(); i++){
            cout << seats[i] << " ";
            res = max(res, seats[i]);
        }
        cout << endl;
        return res - 1;
    }
};
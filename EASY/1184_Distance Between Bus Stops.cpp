class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        int totally = 0;
        int tmp = 0;
        for(int i=0; i<distance.size(); i++){
            totally += distance[i];
            if((start <= i && i< destination) || (destination <= i && i < start))
                tmp += distance[i];
        }
        return min(tmp, totally-tmp);
    }
};
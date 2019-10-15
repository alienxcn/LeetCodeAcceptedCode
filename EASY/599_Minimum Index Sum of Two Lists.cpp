class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> res;
        int index = 3000;
        for(int i=0; i<list1.size(); i++){
            for(int j=0; j<list2.size(); j++){
                if(list1[i].compare(list2[j]) == 0){
                    if(index == i+j){
                        index = i+j;
                        res.push_back(list1[i]);
                    }
                    if(index > i+j){
                        index = i+j;
                        res.clear();
                        res.push_back(list1[i]);
                    }
                }
            }
        }
        return res;
    }
};
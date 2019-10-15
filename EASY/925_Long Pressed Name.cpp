class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i = 0, j = 0;
        char prev = '#';
        while(i < name.size() && j < typed.size()){
            if(name[i] == typed[j]){
                prev = name[i++];
                j++;
            } else if(typed[j] == prev){
                j++;
            } else {
                return false;
            }
        }
        if(i == name.size()){
            while(j < typed.size()){
                if(typed[j++] != prev)
                    return false;
            }
        } else {
            return false;
        }
        return true;
    }
};
class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> res;
        vector<string> temp;
        text = text + " ";
        int posi = 0;
        int head = 0;
        while((posi = text.find(' ', posi)) != string::npos){
            string t = text.substr(head, posi-head);
            temp.push_back(t);
            head = ++posi;
        }
        for(int i=0; i<temp.size()-1; i++){
            if(temp[i].compare(first) == 0 && temp[i+1].compare(second) == 0 && i+2 < temp.size())
                res.push_back(temp[i+2]);
        }
        return res;
    }
};
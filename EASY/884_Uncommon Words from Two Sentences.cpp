class Solution {
public:
    void split(string a, map<string, int>& as){
        int posi = 0;
        int head = 0;
        a = a + " ";
        while((posi = a.find(' ', posi)) != string::npos){
            string temp = a.substr(head, posi-head);
            head = ++posi;
            if(as.find(temp) == as.end()){
                pair<string, int> value(temp, 1);
                as.insert(value);
            } else {
                as[temp]++;
            }
        }
        /*
        for(map<string, int>::iterator it = as.begin(); it != as.end(); it++){
            if(it->second > 1)
                as.erase(it->first);
        }  
        */
    }
    vector<string> uncommonFromSentences(string A, string B) {
        map<string, int> as;
        map<string, int> bs;
        vector<string> res;
        split(A, as);
        split(B, bs);
        for(map<string, int>::iterator it = as.begin(); it != as.end(); it++){
            if(bs.find(it->first) == bs.end() && it->second == 1)
                res.push_back(it->first);
        }        
        for(map<string, int>::iterator it = bs.begin(); it != bs.end(); it++){
            if(as.find(it->first) == as.end() && it->second == 1)
                res.push_back(it->first);
        }
        return res;
    }
};
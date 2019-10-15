class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string, int> m;
        for(int i=0; i<paragraph.size(); i++){
            if(paragraph[i] == '!' || paragraph[i] == '?' || paragraph[i] == '\'' || paragraph[i] == ',' || paragraph[i] == ';' || paragraph[i] == '.'){
                paragraph[i] = ' ';
            }
            else if(isalpha(paragraph[i]))
                paragraph[i] = tolower(paragraph[i]);
            
            if(paragraph[i] == ' ' && ((i<paragraph.size()-1 && paragraph[i+1] == ' ') || i==paragraph.size()-1))
                paragraph.erase(i, 1);
        }
        cout << paragraph << endl;
        paragraph = paragraph + " ##";
        int head = 0;
        int posi = 0;
        while((posi = paragraph.find(' ', posi)) != string::npos){
            string t = paragraph.substr(head, posi-head);
            if(m.count(t) == 0)
                m[t] = 1;
            else
                m[t]++;
            head = ++posi;
        }
        
        vector<pair<string, int>> vMap;
        for(map<string, int>::iterator i = m.begin(); i != m.end(); i++){
            cout << i->first << " " << i->second << endl;
            vMap.push_back(make_pair(i->first, i->second));
        }
        sort(vMap.begin(), vMap.end(), [](const pair<string, int> &x, const pair<string, int> &y) -> int {
            return x.second > y.second;
        });
        
        string res;
        for(int i=0; i<vMap.size(); i++){
            if(find(banned.begin(), banned.end(), vMap[i].first) == banned.end()){
                res = vMap[i].first;
                break;
            }
        }
        return res;
    }
};
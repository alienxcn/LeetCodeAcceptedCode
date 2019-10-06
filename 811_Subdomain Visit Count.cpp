class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string, int> res;
        vector<string> rest;
        for(int i=0; i<cpdomains.size(); i++){
            string temp = cpdomains[i];
            int count = stoi(temp.substr(0, temp.find(' ')));
            string domain = temp.substr(temp.find(' ')+1, temp.size());
            
            int posi = -1;
            do {
                string tt = domain.substr(++posi, domain.size());
                if(res.count(tt) == 0)
                    res[tt] = count;
                else
                    res[tt] += count;
                posi = domain.find('.', posi);
            } while(posi != string::npos);
        }
        map<string, int>::iterator a = res.begin();
        for(;a != res.end(); a++){
            // cout << a->first << " " << a->second << endl;
            rest.push_back(to_string(a->second) + " " + a->first);
        }
        return rest;
    }
};
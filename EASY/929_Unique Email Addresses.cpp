class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> ans;
        for(int i=0; i<emails.size(); i++){
            int posi = emails[i].find('@');
            int posi2 = emails[i].find_first_of('+');
            if(posi2 != string::npos){
                emails[i].erase(posi2, posi-posi2);
            }
            while((posi2 = emails[i].find('.')) != string::npos && posi2 < emails[i].find('@'))
                emails[i].erase(posi2, 1);
            cout << emails[i] << endl;
            ans.insert(emails[i]);
        }
        return ans.size();
    }
};
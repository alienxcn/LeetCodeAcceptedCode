class Solution {
public:
    string defangIPaddr(string address) {
        int posi = 0;
        while((posi = address.find('.', posi)) != string::npos){
            address.insert(posi, "[");
            address.insert(posi+2, "]");
            posi+=2;
        }
        return address;
    }
};
class Solution {
public:
    int minimizedStringLength(string s) {
       map<char,int> temp;
        for(char c:s)
            temp[c]++;
        return temp.size();
    }
};
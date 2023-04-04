class Solution {
public:
    int partitionString(string s) {
        
        map<char,int>hold;
        int ans = 1;
        for(int i=0;i<s.size();i++){
            if(hold.count(s[i])){
                ans++;
                hold.clear();
            }
            hold[s[i]] = i;
        }
        return ans;
        
    }
};
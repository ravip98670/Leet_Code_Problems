class Solution {
public:
    int countKeyChanges(string s) {
        int ans = 0;
        for(int i=1;i<s.size();i++){
            char s1 = tolower(s[i]);
            char s2 = tolower(s[i-1]);
            if(s1 != s2)
                ans++;
        }
        return ans;
    }
};
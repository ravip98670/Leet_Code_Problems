class Solution {
public:
    int countHomogenous(string s) {
        
        int mod = 1000000007;
        int ans = s.size();
        
        int cnt = 1;
        for(int i=1;i<s.size();i++){
            if(s[i-1] == s[i]){
                ans = (ans+cnt)%mod;
                cnt++;
            }
            else{
                cnt = 1;
            }
        }
        return ans;
    }
};
class Solution {
public:
    long long minimumSteps(string s) {
        long long ans = 0;
        
        int i=0;
        int j=s.size()-1;
        
        while(i < j){
            if(s[i] == '0' && s[j] == '1'){
                i++;
                j--;
                continue;
            }else if(s[i] == '0' && s[j] == '0'){
                i++;
            }else if(s[i] == '1' && s[j] == '1'){
                j--;
            }else {
                long long dis = j-i;
                i++;
                j--;
                ans += dis;
            }
        }
        return ans;
    }
};
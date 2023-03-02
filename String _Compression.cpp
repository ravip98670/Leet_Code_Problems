class Solution {
public:
    int compress(vector<char>& chars) {
        
        if(chars.size() == 1)
            return 1;
        
        
        int i = 0;
        int ans = 0;
        while(i < chars.size()) {
            int count = 1;
            while(i < chars.size()-1 && chars[i] == chars[i + 1]) {
                count++;
                i++;
            }
            
            chars[ans] = chars[i];
            i++;
            ans++;
            if(count > 1) {
                string num = to_string(count);
                for(int k=0;k<num.size();k++) {
                    chars[ans] = num[k];
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
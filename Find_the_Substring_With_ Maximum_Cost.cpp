class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
         
        vector<int> hold(26,0);
        for(int i=0;i<26;i++){
            hold[i] = i+1;    
        }
        
        for(int i=0;i<chars.size();i++){
            hold[chars[i]-'a'] = vals[i];   
        }
        
        vector<int> arr(s.size());
        for(int i=0;i<s.size();i++){
            arr[i] = hold[s[i]-'a'];
        }
        
        int ans = 0,temp = 0;
        for(int i=0;i<arr.size();i++){
            ans = max(temp,ans);
            
            temp += arr[i];
            if(temp < 0)
                temp = 0;
        }
        ans = max(temp,ans);
        return ans;
        
    }
};
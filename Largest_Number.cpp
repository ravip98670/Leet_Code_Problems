class Solution { 
public:
    static bool custom_comparator(string a,string b){
        if((a+b) > (b+a))
            return true;
        else
            return false;
     }
    string largestNumber(vector<int>& nums) {
        
        string ans;
        
        vector<string> nums_str;
        for(int i:nums){
            nums_str.push_back(to_string(i));
            cout<<i<<endl;
        }
        
        sort(nums_str.begin(),nums_str.end(),custom_comparator);
        
        for(string s:nums_str){
            ans.append(s);
            cout<<s<<endl;
        }
        
        int start = 0;
        while(ans[start] == '0' && start < ans.size()-1){
            start++;
        }
        
        return ans.substr(start);
    }
    
};
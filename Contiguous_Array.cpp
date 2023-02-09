class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int sum =0;        
        int ans = 0;
        unordered_map<int,int>m;
        m.insert({0,-1});
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i]==1?1:-1;           
            auto it = m.find(sum);
            if(it!=m.end())
            {
                ans = max(ans,i-it->second);
            }
            else m.insert({sum,i});
            
        }
        
        return ans;
    }
};
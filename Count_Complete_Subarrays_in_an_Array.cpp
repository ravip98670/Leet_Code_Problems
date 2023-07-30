class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int count = 0;
        unordered_set<int> st;
        for(int n:nums) st.insert(n);
        
        int n = st.size();
        unordered_map<int,int> mp;
        
        int j = 0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            while(mp.size() == n){
                count += nums.size()-i;
                mp[nums[j]]--;
                if(mp[nums[j]] == 0) mp.erase(nums[j]);
                j++;
            }
        }
        return count;
    }
};
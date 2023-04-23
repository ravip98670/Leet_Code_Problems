class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        
        int str = 0;
        int en = 0;
        vector<int> hold;
        map<int,int> mp;
        while(en < nums.size()){
            
            if(nums[en] < 0)
                mp[nums[en]]++;
            
            if(en-str+1 == k){
                int count = 0;
                bool flag = false;
                
                for(auto i:mp){
                    count += i.second;
                    
                    if(count >= x){
                        hold.push_back(i.first);
                        mp[nums[str]]--;
                        flag = true;
                        str++;
                        break;
                    }
                }
                if(!flag){
                    hold.push_back(0);
                    mp[nums[str]]--;
                    str++;
                }
            }
            en++;
        }
        return hold;
    }
};
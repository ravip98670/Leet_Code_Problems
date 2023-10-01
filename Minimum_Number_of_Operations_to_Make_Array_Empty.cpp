class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        map<int,int> mp;
        for(auto it:nums){
            mp[it]++;
        }
        
        for(auto it:mp){
            if(it.second == 1) return -1;
        }
        int count = 0;
        for(auto it:mp){
            int curr = it.second;
            
            if(curr%3 == 0){
                count += (curr/3);
            }else if(it.second > 3){
                int k = curr/3;
                count += k+1;
            }else count += 1;
        }
        return count;
    }
};
class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        map<int,int> temp;
        
        for(int i=0;i<nums.size();i++){
            temp[nums[i]-k]++;
            temp[nums[i]+k+1]--;
        }
        int t = 0;
        int ans = 0;
        for(auto i:temp){
            t += i.second;
            ans = max(ans,t);
        }
        return ans;
    }
};
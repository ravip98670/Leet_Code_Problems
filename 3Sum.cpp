class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        set<vector<int>> s;
        int n=nums.size();
        
        for(int i=0;i<n-2;i++){
            int val=nums[i];
            int left=i+1;
            int right=n-1;
            
            while(left < right){
                int sum = val + nums[left] + nums[right];
                if(sum == 0){
                    s.insert({val,nums[left],nums[right]});
                    left++;
                    right--;
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
         sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int ans=0;
        int n=nums.size();
        
        for(int i=0;i<n-2;i++){
            int val=nums[i];
            int left=i+1;
            int right=n-1;
            
            while(left < right){
                int sum = val + nums[left] + nums[right];
                
                if(sum == target)
                    return target;
                else if(abs(sum-target) < diff){
                    diff=abs(sum-target);
                    ans=sum;
                }
                
                if(sum < target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    
    }
};
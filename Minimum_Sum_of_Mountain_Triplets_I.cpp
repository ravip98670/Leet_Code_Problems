class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int sum = 0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i] < nums[j] && nums[k] < nums[j]){
                        cout<<i<<" "<<j<<" "<<k<<endl;
                        if(sum == 0)
                            sum = (nums[i]+nums[j]+nums[k]);
                        else
                            sum = min(sum,(nums[i]+nums[j]+nums[k]));
                    }
                }
            }
        }
        return sum == 0 ? -1 : sum;
        
    }
};
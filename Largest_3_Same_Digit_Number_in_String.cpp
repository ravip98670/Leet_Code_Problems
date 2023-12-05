class Solution {
public:
    string largestGoodInteger(string nums) {
       string ans = "";
        
        for(int i=0;i<nums.size()-2;i++){
                if(nums[i] == nums[i+1] && nums[i] == nums[i+2]){
                    string temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[i]);
                    temp.push_back(nums[i]);
				    ans = max(ans,temp);
                }
            
        }
       
        return ans;
    }
};
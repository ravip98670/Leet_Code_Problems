class Solution {
    int  helper(vector<int>& nums,int start,int end,int target){
        
        
        while(start <= end){
            int mid = (start+end)/2;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid] < target)
                start = mid+1;
            else
                end = mid-1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        
        return helper(nums,0,nums.size()-1,target);
    }
};
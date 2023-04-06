class Solution {
public:
     bool isvalid(vector<int> &nums,long long int mid){
         long long sum=0,maxnum=INT_MIN;
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>(i+1)*mid)
                return false;
        }
        
        return true;
    }
                  
    
    
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        
       int low=0,mid,high=*max_element(nums.begin(),nums.end());
        
        while(low<high){
            mid=(low+high)>>1;
            
            if(isvalid(nums,mid)){
                high=mid;
            }else {
                low=mid+1;
            }
        }

        
        return high; 
        
    }
};
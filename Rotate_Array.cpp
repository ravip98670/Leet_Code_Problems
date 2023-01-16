class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        /*
        34 / 38 test cases passed
        
        int n=nums.size();
        while(k--){
            int temp=nums[n-1];
            for(int i=n-2;i>=0;i--){  
                nums[i+1]=nums[i];
            }
            nums[0]=temp;
        }*/
        
        /*Runtime: 34 ms, faster than 73.82% of C++ online submissions for Rotate Array.
Memory Usage: 25 MB, less than 59.36% of C++ online submissions for Rotate Array.*/
        
        /*
        int n=nums.size();
        k %= nums.size();
        
        int left=0;
        int right=n-k-1;
        
        
        while(left <= right){
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        
        left=n-k;
        right=n-1;
        
        while(left <= right){
            int temp=nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
        reverse(nums.begin(),nums.end());*/
        
        k %= nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
        
    }
};
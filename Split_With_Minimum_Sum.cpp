class Solution {
public:
    int splitNum(int num) {
        
        string nums = to_string(num);
        
        sort(nums.begin(),nums.end());
        
        string oddSum = "";
        string evenSum = "";
        for(int i=0;i<nums.size();i++){
            if(i == 0 || i%2 == 0){
                oddSum += nums[i];
            }
            else
                evenSum += nums[i];
        }
        
        int nums1 = stoi(oddSum);
        int nums2 = stoi(evenSum);
        
        return nums1+nums2;
    }
};
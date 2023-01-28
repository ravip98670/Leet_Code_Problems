class Solution {
public:
    int countOperations(int num1, int num2) {
        long long count = 0;
        long long nums1=num1,nums2=num2;
        while(nums1 != 0 && nums2 != 0){
            count++;
            if(nums1 >= nums2){
                nums1 -= nums2;
            }
            else nums2 -= nums1;
        }
        return count;
    }
};
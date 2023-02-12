class Solution {
    long long  concat(long long x, long long y){
        char str1[20];
        char str2[20];

        sprintf(str1,"%d",x);
        sprintf(str2,"%d",y);

        strcat(str1,str2);

        return atoi(str1);
}
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        
        long long  conValue = 0;
        long long  left = 0;
        long long  right = nums.size()-1;
        
        while(left <= right){
            
            if(left == right)
                conValue += nums[left];
            else
                conValue += concat(nums[left],nums[right]);
            left++;
            right--;
        }
        return conValue;
    }
};
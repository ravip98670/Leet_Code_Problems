class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
       
        
        long long sum1 = 0, sum2 = 0; 
        long long z1 = 0, z2 = 0;
       
        for(int i=0;i<nums1.size();i++){
            
            if(nums1[i] == 0){
                z1++;
                sum1 += 1;
            }
            sum1 += nums1[i];
        }
        
        for(int i=0;i<nums2.size();i++){
          
           if(nums2[i] == 0){
               z2++;
               sum2 += 1;
           }
            
           sum2 += nums2[i];
       }
        
        if(sum1 > sum2){
            if(z2 > 0) 
                return sum1;
            else 
                return -1;
        }
        else if(sum1 < sum2){
            if(z1 > 0) 
                return sum2;
            else 
                return -1;
        }
        else 
            return sum1;
    }
};
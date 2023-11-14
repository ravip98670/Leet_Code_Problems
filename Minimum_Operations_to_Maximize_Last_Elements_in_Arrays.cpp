class Solution {
public:
    int minOperations(vector<int>& nums1, vector<int>& nums2) {
        
        int a1 = 0;
        int a2 = 0;
        int n = nums1.size();
        for(int i=0;i<n-1;i++){
             if(nums1[i] <= nums1[n-1] && nums2[i] <= nums2[n-1])
                 continue; 
            
            else if(nums1[i] <= nums2[n-1] && nums2[i] <= nums1[n-1]) 
                a1++;  
            
            else{ 
                a1 = -1; 
                break; 
            } 
        }
        
        a2 = 1;
        swap(nums1[n-1],nums2[n-1]);
        
        for(int i=0;i<n-1;i++){
             if(nums1[i] <= nums1[n-1] && nums2[i] <= nums2[n-1])
                 continue; 
            
            else if(nums1[i] <= nums2[n-1] && nums2[i] <= nums1[n-1]) 
                a2++;  
            
            else{ 
                a2 = -1; 
                break; 
            } 
        }
        
        int ans  = min(a1,a2);
        if(ans == -1)
            return -1;
            return ans;
    }
};
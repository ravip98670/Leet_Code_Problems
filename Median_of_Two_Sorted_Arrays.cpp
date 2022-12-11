class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <double> output;
        int i=0,j=0;
        int k=nums1.size()+nums2.size();
        
        while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            output.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            output.push_back(nums2[j]);
        	j++;
        }else{
             output.push_back(nums1[i]);
            i++;
             output.push_back(nums2[j]);
        	j++;
        }
        }
        while(i<nums1.size()){
            output.push_back(nums1[i]);    
            i++;
        }
        while(j<nums2.size()){
          output.push_back(nums2[j]);
          j++;
      }
      if(k%2==0)
          return (output[(k/2)-1]+output[k/2])/2.0;
      else
          return output[k/2];
    }
};
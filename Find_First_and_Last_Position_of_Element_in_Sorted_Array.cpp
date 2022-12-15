class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int second=-1;
        vector<int>hold;
        int start=0;
        int end=nums.size()-1;
        
        while(start <= end){
            int mid=(start+end)/2;
            if(nums[mid] == target){
                first=mid;
                end=mid-1;
            }
            else if(nums[mid] > target){
                end=mid-1;
            }
            else
                start=mid+1;
        } 
        start=0;
        end=nums.size()-1;
        
        while(start <= end){
            int mid=(start+end)/2;
            if(nums[mid] == target){
                second=mid;
                start=mid+1;;
            }
            else if(nums[mid] > target){
                end=mid-1;
            }
            else
                start=mid+1;
        }
        hold.push_back(first);
        hold.push_back(second);
        return hold;
    }
};

// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int first=-1;
//         int second=-1;
//         vector<int>hold;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==target){
//                 first=i;
//                 break;
//             }
//         }
//          for(int i=nums.size()-1;i>=0;i--){
//             if(nums[i]==target){
//                 second=i;
//                 break;
//             }
//         }
//         hold.push_back(first);
//         hold.push_back(second);
//         return hold;
//     }
// };
// #include <bits/stdc++.h> 
class Solution {
public:
    int minimumSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<int> left(n,0);
        left[0] = nums[0];
        for(int i=1;i<n;i++){
            left[i] = min(left[i-1] , nums[i]);
        }
        
        vector<int> right(n,0);
        right[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            right[i] = min(right[i+1] , nums[i]);
        }
        
        for(int i=0;i<n;i++){
            cout<<nums[i]<<" "<<left[i]<<" "<<right[i]<<endl;
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            
            if(sum == 0 && (nums[i] > left[i] && nums[i] > right[i])){
                sum = (nums[i] + left[i] + right[i]);
            }else if(nums[i] > left[i] && nums[i] > right[i]){
                sum = min(sum,(nums[i] + left[i] + right[i]));
            }
        }
        return sum == 0 ? -1 : sum;
    }
};
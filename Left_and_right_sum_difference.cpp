class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> leftSum;
        vector<int> rightSum;
        
        long long sum = 0;
        leftSum.push_back(0);
        for(int i=0;i<nums.size()-1;i++){
            sum += nums[i];
            leftSum.push_back(sum);
            cout<<sum<<endl;
        }
        
        sum = 0;
        rightSum.push_back(0);
        for(int i=nums.size()-1;i>0;i--){
            sum += nums[i];
            cout<<sum<<endl;
            rightSum.push_back(sum);
        }
        reverse(rightSum.begin(),rightSum.end());
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return ans;
    }
};
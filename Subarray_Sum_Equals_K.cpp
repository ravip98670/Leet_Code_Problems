class Solution {
public:
    int subarraySum(vector<int>&nums, int k) {
       unordered_map<int,int> hold;
        int count=0;
        int sum=0;
        
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
            if(sum == k)
                count++;
            
            if(hold.find(sum-k) != hold.end()){
                count = hold[sum-k]+count;
            }
            
            if(hold.find(sum) != hold.end())
                hold[sum]++;
            else
                hold[sum]=1;
        }
        return count;
}
};
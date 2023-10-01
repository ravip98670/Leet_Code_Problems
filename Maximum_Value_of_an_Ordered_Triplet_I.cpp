class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    // cout<<i<<j<<k<<endl;
                    long long curr = (long long)(((long long)nums[i] - (long long)nums[j]) * (long long)nums[k]);
                    if(sum < curr) sum = curr;
                }
            }
        }
        return sum ;
    }
};
class Solution {
public:
    int findKOr(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k == 1){
            int ans = nums[0];
            for(int i=1;i<n;i++){
                ans = ans | nums[i];
            }
            return ans;
        }
        
        if(n == k){
            int ans = nums[0];
            for(int i=1;i<n;i++){
                ans = ans & nums[i];
            }
            return ans;
        }
        
        int ans = 0;
        for(int i=0;i<32;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                int x = 1 << i;
                if((x & nums[j]) == x){
                    cnt++;
                    
                }
            }
            if(cnt >= k){
                ans += (pow(2,i));
                cout<<ans<<endl;
            }
        }
        return ans;
    }
};
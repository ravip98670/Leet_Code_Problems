class Solution {
public:
    int rev(int n){
        int ans = 0;
        while(n != 0){
            int rem = n%10;
            ans = ans*10 + rem;
            n /= 10;
        }
        return ans;
    }
    
    int countNicePairs(vector<int>& nums) {
        
        int mod = 1e9 + 7;
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            nums[i] = (nums[i] - rev(nums[i]));
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto n:mp){
            cout<<n.first<<endl;
        }
        for(auto n:mp){
            if(n.second != 1){
                cnt = (cnt + ((long)(n.second*(long)(n.second-1))/2)) % mod;
            }
        }
        return cnt;
    }
};
class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<n;j++){
               string a=to_string(nums[i]);
                string b=to_string(nums[j]);
                int t1=a[0]-'0';
                int t2=b[b.size()-1]-'0';
                if(gcd(t1,t2)==1)
                         count++;  
            }
        }
        return count;
    }
};
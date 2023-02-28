class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
     
        int n = nums.size();
        for(int i=0;i<n;i++){
            int temp = nums[i];
            int rev = 0;
            while(temp > 0){
                rev = (rev * 10) + (temp%10);
                temp /= 10;
            }
            cout<<rev<<endl;
            nums.push_back(rev);
        }
        
        map<int,int> hold;
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }

        return hold.size();
    }
};
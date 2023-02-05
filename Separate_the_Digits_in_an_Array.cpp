class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector <int> fill;
        
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            
            vector <int> flag;
            while(temp > 0){
                int rem = temp % 10;
                flag.push_back(rem);
                temp /= 10;
            }
            reverse(flag.begin(),flag.end());
            for(int j=0;j<flag.size();j++){
                fill.push_back(flag[j]);
            }
        }
        return fill;
    }
};
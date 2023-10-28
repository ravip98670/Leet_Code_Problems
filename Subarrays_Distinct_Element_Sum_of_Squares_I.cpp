class Solution {
public:
    int sumCounts(vector<int>& nums) {
        

//         map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         int sum = nums.size();
        
//         sum += (nums.size() * mp.size()*mp.size());
//         return sum;
        
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            set<int> s;
            for (int j = i; j < nums.size(); j++) {
                s.insert(nums[j]);
                sum += s.size() * s.size();
            }
        }

        return sum;
    }
};
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        long long sum = 0;
        map<int,int> hold;
        
        for(int i=0;i<nums.size();i++){
            hold[nums[i]]++;
        }
        
        for(auto i:hold){
            if(i.second == 1)
                sum += i.first;
        }
        
        return sum;
    }
};
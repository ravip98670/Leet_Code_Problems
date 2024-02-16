class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
         if(num % 3) 
             return ans;
        
        long long temp = num / 3;
        
        ans.push_back(temp-1);
        ans.push_back(temp);
        ans.push_back(temp+1);
        
        return ans;
        
    }
};
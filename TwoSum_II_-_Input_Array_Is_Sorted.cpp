class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        
        vector <int> hold;
        int size=numbers.size();
        int left=0;
        int right=size-1;
        
        while(left < right){
            if(numbers[left] + numbers[right] > target)
                right--;
            else if(numbers[left] + numbers[right] < target)
                left++;
            else{
                hold.push_back(left+1);
                hold.push_back(right+1);
                return hold;
            }
        }
        return hold;
    }
};
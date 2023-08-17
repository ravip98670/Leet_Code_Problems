class Solution {
public:
    int digit(int num){
        int sum = -1;
        
        
        while(num > 0){
            sum = max(sum,num%10);
            num = num/10;
        }
        
        return sum;
    }
    
    int maxSum(vector<int>& nums) {
       int maxi = -1;

        for(int i=0; i<nums.size(); i++) { 
           
            for(int j=1+i; j<nums.size(); j++){ 
                
                int n1 = nums[i];
                int n2 = nums[j]; 
                
                if(digit(n1) == digit(n2))

                    maxi = max(n1+n2, maxi);
            }
        }

                return maxi;
    }
};
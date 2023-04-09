class Solution {
public:
    int isPrime(int n){
   
        if (n <= 1)
            return 0;

        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return 0;
        }
        return n;
    }
    
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            
                if((nums[i][i] == isPrime(nums[i][i])))
                        maxi = max(nums[i][i] , maxi); 
            
                if((nums[i][nums.size() - i - 1] == isPrime(nums[i][nums.size() - i - 1])))
                        maxi = max(nums[i][nums.size() - i - 1] , maxi);  
           
        }
        return maxi;
    }
};
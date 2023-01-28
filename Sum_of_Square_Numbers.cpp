class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long  left=0,right=sqrt(c);
    	while(left<=right)
    	{
    		long long twoSum=left*left+right*right;
    		if(twoSum<c)
    			left++;
    		else if(twoSum>c)
    			right--;
    		else 
    			return true;
    	}    
    	return false;
    }
};
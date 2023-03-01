class Solution {
    void merge(vector<int>& nums,int st,int en){
        int size = (en-st+1); 
	    int mid = (st+en)/2;
        
        vector<int> arr(size);
        int i = st;
        int j = mid+1;
        int k = 0;
        
        while(i <= mid && j <= en){
		if(nums[i] < nums[j]){
			arr[k] = nums[i];
			i++;
			k++;
		}
		else{
			arr[k] = nums[j];
			k++;
            j++;
            }
        }

        while(i <= mid){
            arr[k] = nums[i];
            i++;
            k++;
        }

        while(j <= en){
            arr[k] = nums[j];
            j++;
            k++;
        }

        int m = 0;
        for(int i=st;i<=en;i++){
            nums[i] = arr[m];
            m++;
        }
        }

    void helper(vector<int>& nums,int st,int en){
        int mid = (st + en) / 2;
        if(st >= en)
            return;
        
        
        helper(nums,st,mid);
        helper(nums,mid+1,en);
        merge(nums,st,en);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        
        
        helper(nums,0,nums.size()-1);
        
        return nums;
    }
};
class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
     
    vector<long>ans;
        
        ans.push_back(2);
       
      int maxele=*max_element(nums.begin(), nums.end());
        for(int temp=3;temp<=maxele;temp++){
            bool check=true;
            for(int k=2;k<=temp/2;k++){
                if(temp%k==0){
                    check=false;
                    break;
                }
            }
            if(check){
                ans.push_back(temp);
            }
        }
        int value=0;
       for(int temp=0;temp<ans.size();temp++){
           int num=ans[temp];
           bool check=false;
           int elem=*max_element(nums.begin(), nums.end());
           if(elem==0){
             
               break;
           }
           for(int k=0;k<nums.size();k++){
               if(nums[k]%num==0){
                   while(nums[k]>0&&nums[k]%num==0){
                       nums[k]/=num;
                   }
                   check=true;
               }
           }
           if(check){
               value++;
           }
       }
        
        return value;
    }
};
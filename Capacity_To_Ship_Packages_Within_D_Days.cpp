class Solution {
    
    bool check(vector<int>&weights,int mid,int days){
        int count=1;
        int sum=weights[0];
        for(int i=1;i<weights.size();i++){
            if((sum+weights[i])<=mid)
                sum+=weights[i];
            else{
                sum=weights[i];
                count++;
            }
        } 
        if(count<=days){
            return true;
        }
        return false;
    }
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int sum=0;
        int maxVal=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>maxVal)
                maxVal=weights[i];
            sum+=weights[i];
        }
       
        int str=maxVal;
        int end=sum;
        int ans=str;
        while(str<=end){
            
            int mid=(str+end)/2;
            if(check(weights,mid,days)){
                ans=mid;
                end=mid-1;
            }else
                str=mid+1;   
        }
        return ans;
    }
};
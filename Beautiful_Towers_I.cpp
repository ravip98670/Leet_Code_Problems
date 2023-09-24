class Solution {
public:
    long long fun(int i,vector<int> maxHeights){
            long long temp_ans = 0;
            
            int curr = maxHeights[i];
            int ind;
            for(ind = i-1;ind >= 0;ind--){
                maxHeights[ind] = min(maxHeights[ind],curr);
                curr = maxHeights[ind];
                temp_ans += curr;
            }
            
            curr = maxHeights[i];
            
            
            for(ind = i+1;ind < maxHeights.size();ind++){
                maxHeights[ind] = min(maxHeights[ind],curr);
                curr = maxHeights[ind];
                temp_ans += curr;
                
            }
            
            temp_ans += maxHeights[i];
            return temp_ans;
    }
    long long maximumSumOfHeights(vector<int>& maxHeights) {
       
        
        vector<long long> ans(maxHeights.size(),0);
        for(int i=0;i<maxHeights.size();i++){
            
            ans[i] = fun(i,maxHeights);
            
            
        }
        long long val = INT_MIN;
        for(int i=0;i<ans.size();i++){
            val = max(val,ans[i]);
        }
        return val;
        
    }
};
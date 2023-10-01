class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
//         long long temp = 0;
//         long long sum = 0; 
//         vector<pair<long long,int>> dem;
//         int j = 0;
//         for(int i=1;i<nums.size()-2;i++){
//             if(i == 2)
//                 long long  temp = (long long )((long long)nums[i-1]-(long long) nums[i]);
//             else{
//                 long long temp = max((long long)(dem[j-1].first +(long long)nums[i-1] - (long long)nums[i]),(long long )((long long)nums[i-2]-(long long) nums[i-1]));
//                 cout<<temp<<" :"<<endl;
//             }  
//             dem.push_back({temp,i-1});
//             j++;
//             //sum = max(sum,temp*(long long)(nums[i]));
//         }
//         for(int i=0;i<dem.size();i++){
//             long long num = dem[i].first;
//             int ind = dem[i].second;
            
//             for(int k=ind+1;k<nums.size();k++){
//                 sum = max(sum,num*(long long)(nums[k]));
//             }
//         }
//         return sum;
        
        int n = nums.size();
        long long res = 0;
        vector<int> temp1(n);
        temp1[0] = nums[0];
        int maxi = 0;
        for(int i=1;i<n;i++){
            temp1[i] = max(temp1[i-1],nums[i]);
            
        }
        
        vector<int> temp2(n);
       // maxi = 0;
        temp2[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--){
            //maxi = max(maxi,nums[i]);
            temp2[i] = max(temp2[i+1],nums[i]);
        }
        
        for(int j=1;j<n-1;j++){
            long long temp = (long long)((long long)temp1[j-1]-(long long)nums[j])*(long long)temp2[j+1];
            res = max(res,temp);
        }
        if(res <= 0)
            return 0;
        return res;
        
    }
};
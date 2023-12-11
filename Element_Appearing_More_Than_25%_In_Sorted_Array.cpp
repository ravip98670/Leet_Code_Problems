class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        
       
        map<int,int> mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        int temp = INT_MIN;
        int ans;
        for(auto it:mp){
            if(temp < it.second){
                temp = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};
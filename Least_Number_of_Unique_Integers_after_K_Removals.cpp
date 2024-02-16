class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int>m;
        
        for(auto x:arr)
            m[x]++;
        
        vector<int>v(m.size());
        
        for(auto x:m){
            v.push_back(x.second);
        }
        
        sort(v.begin(),v.end());
        
        int count=0;
        for(auto x:v){
            if(x<=k){
                k-=x;
                count++;
            }
            if(x>k){
                break;
            }
        }
        
        return v.size()-count;
    }
};
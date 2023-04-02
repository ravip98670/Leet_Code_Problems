class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {     
        int p = potions.size();
        sort(potions.begin(),potions.end());
        
        vector<int> ans;
        
        for(long long n:spells){
            
            int st = 0;
            int ed = p-1;
            int count = 0;
            
            while(st <= ed){
                int mid = st+(ed-st)/2;
                
                if(n*potions[mid] >= success){ 
                    count += ed-mid+1;
                    ed = mid-1;
                }
                else if(n*potions[mid] < success)
                    st = mid+1; 
            }
            ans.push_back(count);
        }
        return ans;
    }
};
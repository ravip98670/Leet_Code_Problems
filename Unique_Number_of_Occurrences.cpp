class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> hold;
        
        for(int n:arr){
            hold[n]++;
        }
        
        vector<int>ans;
        for(auto i:hold) 
            ans.push_back(i.second);
    
    
        set<int> st(ans.begin(),ans.end());
    
        int n = ans.size();
        int y = st.size();
    
        //compare vector size and set size
        if(n==y) 
            return true;
        return false;
    }
};
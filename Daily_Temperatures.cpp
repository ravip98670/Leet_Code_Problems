class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans;
        
        stack<int> st;
        
        for(int i=n-1;i>=0;i--){
            
            if(st.empty()){
                st.push(i);
                ans.push_back(0);
            }   
            else{
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }
            

            if(st.empty()){
                st.push(i);
                ans.push_back(0);
            } 
            
            else{
               
                ans.push_back(st.top()-i);
                 st.push(i);
            }
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
       
    }
};
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       
        vector<int> ans;
        map<int,int> hold;
        
        for(auto i:arr1)
            hold[i]++;
        
        for(auto i:arr2){
            if(hold.find(i) != hold.end()){
                auto x = hold.find(i);
                int count = x->second;
                
                vector<int> temp(count,i);
                ans.insert(ans.end(),temp.begin(),temp.end());
                hold.erase(i);
            }
        }
        
        for(auto i:hold){
            int ele = i.first;
            int count = i.second;
            vector<int> temp(count,ele);
            ans.insert(ans.end(),temp.begin(),temp.end());
            
        }
        return ans;
        
    }
};
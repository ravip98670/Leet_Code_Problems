class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> temp = arr;
        
        sort(temp.begin(),temp.end());
        
        map<int,int> mp;
        int t = 1;
        for(int i=0;i<arr.size();i++){
            if(mp.find(temp[i]) == mp.end())
                mp.insert({temp[i],t++});
        }
        for(auto i:mp)
            cout << i.first << '\t' << i.second << '\n';
        
        
        for(int i=0;i<arr.size();i++){
            if(mp.find(arr[i])!=mp.end())
                arr[i] = mp[arr[i]];
        }
        
        
     
    
      return arr;
        
    }
};
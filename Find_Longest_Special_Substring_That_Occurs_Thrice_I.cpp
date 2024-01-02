class Solution {
public:
    int maximumLength(string s) {
        map<string,int> mp;
        map<char,int> mp1;
//         for(int i=0;i<s.size()-1;i++){
           
//             for(int j=i;j<s.size();j++){
//                 string str = s.substr(i,j-i+1);
//                 mp[str]++;
//             }
//         }
      
//         int ans = -1;
//         bool t = false;
//         for(auto it:mp){
//             if(it.second >= 3){
//                 string str = it.first;
//                 if(str.size() > ans) 
//                     ans = str.size();
                
//             }
//         }
        for(int i=0;i<s.size();i++){
            string ns="";
            ns+=s[i];
            mp[ns]++;
            for(int j=i+1;j<s.size();j++){
                ns+=s[j];
                mp[ns]++;
            }
        }
       
        int maxi=-1;
        
        for(auto i:mp){
            if(i.second>=3){
                bool flag=true;
                for(int j=1;j<i.first.size();j++){
                    if(i.first[j]!=i.first[0]){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    
                maxi=max((int)i.first.size(),(int)maxi);
                }
            }
        }
        
        return maxi;
        
        

       
        
    }
};
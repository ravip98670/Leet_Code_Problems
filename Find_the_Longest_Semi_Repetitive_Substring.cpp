class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        
        // int count = 0;
        // int ans = 0;
        // int ind,pair = 0;
        // map<int,int> temp;
        int previ=-1;
        int cnt=1;
        bool flag=false;
        int maxi=0;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                cnt++;
            }else if(s[i]==s[i-1]&&!flag){
                cnt++;
                flag=true;
                previ=i;
            }else{
                maxi=max(maxi,cnt);
                cnt=i-previ+1;
                previ=i;
            }
            
           
//                 if(s[i] == s[i+1]){ 
//                     // count++;
//                     pair++;
//                     ind = i;
//                 }
            
//                 if(pair ==  2){
//                     count++;
//                     ans = max(count,ans);
//                     cout<<count<<" ";
//                     count=1;
//                     pair = 0;
//                     i = ind;
                    
//                 }
//            else{i++;
//                       count++;
//                }
                
            
           
           
        }
      maxi = max(cnt,maxi);
        return maxi;
        
    }
};
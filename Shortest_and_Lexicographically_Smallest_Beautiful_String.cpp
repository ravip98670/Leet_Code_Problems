class Solution {
private:
    string lexo(string st,string res){
        
        if(res.size() < st.size()) 
            return res;
        else if(res.size() > st.size()) 
            return st;
        else{
            for(int l = 0;l<st.size();l++){
                if(st[l] == res[l])
                    continue;
                else if(st[l] == '1' && res[l] == '0')
                    return res;
                else
                    return st;
            }
        } 
        return st;
    }
public:
    string shortestBeautifulSubstring(string s, int k) {
        // int cnt = 0;
        // bool temp = false;
        // int ans = INT_MAX;
        // int size = 0;
        // string st = "";
        string res = "";
        // string ret = "";
        
        for(int i=0;i<s.size();i++){
//             if(s[i] == '1'){
//                 temp = true;
//                 cnt++;
//                 st += '1';
//                 size++;
//                 if(temp && k == 1){
//                     res = st;
//                     return res;
//                 }
//             }
            
//             for(int j=i+1;temp && j<s.size();j++){
//                 size++;
//                 st += s[j];
//                 if(s[j] == '1'){
//                     cnt++;
//                 }
//                 if(cnt == k){
//                     cout<<st<<" "<<cnt<<" "<<k<<" "<<endl;
//                     if(res == "" && ans >= size){
//                         res = st;
//                         // ans = size;
//                     }
//                     else{
//                         if(ans >= size){
//                             ans = size;
//                             ret = lexo(st,res);
                           
//                         }
//                     }
//                     cout<<ans<<" "<<size<<endl;
//                     // break;
//                 }
//                 // ret = lexo(st,res);
//             }
            
//             cnt = 0;
//             size = 0;
//             st = "";
//             temp = false;
            int cnt=0;
            
            string ans = "";
            bool temp = false;
            // ns+=s[i];
            if(s[i] == '1'){
                temp = true;
                cnt++;
                ans += '1';
                
                if(temp && k == 1){
                    res = ans;
                    return res;
                }
            }
            for(int j=i+1;temp && j<s.size();j++){
                ans += s[j];
                if(s[j] == '1'){
                    cnt++;
                }
                if(cnt == k){
                    if(res.size() == 0){
                        res = ans;
                        break;
                    }
                    res = lexo(ans,res);
                    cout<<res<<" "<<ans<<endl;
                    break;
                }
            }
        }
        return res;
    }
};
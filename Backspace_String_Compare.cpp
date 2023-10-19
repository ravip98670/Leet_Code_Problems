class Solution {
public:
    int fun(string &st){
        int ind = 0;
        
        for(int i=0;i<st.size();i++){
            if(st[i] == '#'){
                ind--;
                ind = max(ind,0);
            }
            else{
                st[ind] = st[i];
                ind++;
            }
        }
        return ind;
    }
    bool backspaceCompare(string s, string t) {
       
        int s1 = fun(s);
        int s2 = fun(t);
        
        if(s1 != s2) return false;
        
        for(int i=0;i<s1;i++){
            if(s[i] != t[i])
                return false;
        }
        return true;
    }
};
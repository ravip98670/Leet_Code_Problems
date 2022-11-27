class Solution {
public:
    bool isValid(string s) {
        vector<char>st;
        for( int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            {    
                st.push_back(s[i]);
            }else
            {
                if(s[i]=='}'){
                    if(st.size()!=0&&st[st.size()-1]=='{'){
                        st.pop_back();
                    }else{
                        return false;
                    }
                }else if(s[i]==')'){
                    if(st.size()!=0&&st[st.size()-1]=='('){
                        st.pop_back();
                    }else{
                        return false;
                    } 
            }else if(s[i]==']'){
                    if(st.size()!=0&&st[st.size()-1]=='['){
                        st.pop_back();
                    }else{
                        return false;
                    }
                }
            }
        }
        if(st.size())
            return false;
        return true;
    }
};
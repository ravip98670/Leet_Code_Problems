class Solution {
public:
    bool isValid(string s) {
      

    if (s[0] == ')' || s[0] == '}' || s[0] == ']')
        return false;
    if(s[s.size()-1] == '(' || s[s.size()-1] == '{' || s[s.size()-1] == '[')
        return false;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        cout<<s[i]<<endl;
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if(!st.empty() && st.top() == '(' && s[i] == ')')
             st.pop();
        else if (!st.empty() && st.top() == '{' && s[i] == '}')
            st.pop();
        else if (!st.empty() && st.top() == '[' && s[i] == ']')
            st.pop();
        else 
            return false;
        //cout<<st.top()<<endl;
    }
        if(st.size() != 0) return false;
        return true;
   
    }
};
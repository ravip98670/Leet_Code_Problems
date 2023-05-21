class Solution {
public:
    int minLength(string s) {
        stack<char> stack;
        for (char c : s) {
            if (!stack.empty() && stack.top() == 'A' && c == 'B') 
                stack.pop();       
            else if (!stack.empty() && stack.top() == 'C' && c == 'D')
                stack.pop(); 
            else
                stack.push(c);
        }
        return stack.size();
     }
};
class Solution {
public:
    void reverse(string &s,int i,int j){
        while(i <= j){
            int temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int i = 0;
        for(int j=0;j<s.length();j++){
            
            if(s[j] == ' '){ 
                reverse(s,i,j-1);
                i = j+1;
            }
        }
        reverse(s,i,s.length()-1);
        return s;
    }
};
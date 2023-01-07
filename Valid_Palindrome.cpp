string removeSpecialCharacter(string s){
    for(int i=0;i<s.size();i++){
        if((s[i]>='a'&&s[i]<='z') || (s[i]>=48&&s[i]<=57)){
            continue;
        }
     else{
         s.erase(i,1);
         i--; 
     }    
    }
    return s;
}
class Solution {
public:
    bool isPalindrome(string s) {
        
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
        }
        string str=removeSpecialCharacter(s);
        
        int left=0;
        int right=str.size()-1;
        while(left <= right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        if(str.size() == 2 && str[0]!=str[1])
            return false;
        return true;
        
        
    }
};
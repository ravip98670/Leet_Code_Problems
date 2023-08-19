class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        
        string str = "";
        
        int i = 0, j = 0;
        
        while(i < str1.size() && j < str2.size()){
            if(str1[i] == str2[j]){
                str += str2[j];
                i++;
                j++;
            }else{
                char temp = str1[i];
                if(temp == 'z'){
                    temp = 'a';
                }else temp++;
                
                if(temp == str2[j]){
                    str += temp;
                    i++;
                    j++;
                }else{
                    i++;
                }
            }
        }
        cout<<str<<" "<<str2<<endl;
        if(str == str2) return true;
        return false;
        
        
    }
};
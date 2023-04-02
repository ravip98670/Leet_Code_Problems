class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
       
        int count = 0;
        int temp = 0,one=0,zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                zero++;
                // i++;
            }
            else{
                int j=i;
                for( j=i;j<s.size()&&s[j]!='0';j++){
                    // if(s[i] == '1')
                        one++;
                        // i++;
                }
                
                i=j;
                i--;
                if(one==zero){
                    count=max(count,one+zero);
                }else if(one<zero){
                    count=max(count,one+one);
                }else{
                    count=max(count,zero+zero);
                }
            zero=0;
            one=0;
            }
        }
        if(one==zero){
                    count=max(count,one+zero);
                }else if(one<zero){
                    count=max(count,one+one);
                }else{
                    count=max(count,zero+zero);
                }
        return count;
    }
};
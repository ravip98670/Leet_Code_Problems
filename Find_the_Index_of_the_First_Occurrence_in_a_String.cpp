#include<cstring>
class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.size() < needle.size())
            return -1;
        for(int i=0;i<haystack.size()-needle.size()+1;i++){
            if(haystack[i]==needle[0]){
                string str = haystack.substr(i,needle.size());
                if(str==needle)
                    return i;
            }
        }
        return -1;
    }
};
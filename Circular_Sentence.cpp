#include<string>
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int size=sentence.size();
        char check=sentence[0];
        for(int i=1;i<size;i++){
            if((i-2)>=0&&sentence[i-1]==' '){
                if(sentence[i]!=sentence[i-2]){
                    return false;
                }
            }
                  
        }
        
        if(sentence[sentence.size()-1]!=check){
            return false;
        }
        
        return true;
    }
};
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int onesCount = 0,zerosCount = 0;
        int n = s.length();

    
        for (char c : s) {
            if (c == '1') {
                onesCount++;
            }else zerosCount++;
        }

    
        string result = "";

        
        if(onesCount == 1){
            for (int i = 0; i < zerosCount; i++) {
                result += '0';
            }
            if(onesCount == 1)
            result += '1';
        }else{
            for (int i = 0; i < onesCount-1; i++) {
            result += '1';
            }
            for (int i = 0; i < zerosCount; i++) {
                result += '0';
            }
           
            result += '1';
            //onesCount--;
        }
       // reverse(result.begin(),result.end());
        // if(onesCount == 1){
        // result += '1';
        // onesCount--;
        // }

        return result;
    }
};
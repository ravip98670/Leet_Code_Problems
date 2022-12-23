
string key[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
public:
    vector <string> helperfun(string digits){
        if(digits.size()==0){
            vector<string>op;
            op.push_back("");
            return op;
        }
        vector <string> output=helperfun(digits.substr(1));
       int ind=digits[0]-48;
        string concat=key[ind];
        vector<string>op;
      
        for(int i=0;i<concat.size();i++){
            for(int j=0;j<output.size();j++){
                op.push_back(concat[i]+output[j]);
            }
        }
        return op;
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0){
            vector<string>op;
            return op;
        }
        else
            return helperfun(digits);
    }
};
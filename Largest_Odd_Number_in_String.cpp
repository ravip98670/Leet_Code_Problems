class Solution {
public:
    string largestOddNumber(string num) {
        int ind = 0;
        for(int i=num.size()-1;i>=0;i--){
            int t = num[i] - '0';
            if(t%2){
                ind = i;
                break;
            }
        }
        
        string s = "";
        for(int i=0;i<=ind;i++){
            s += num[i];
        }
        return s;
    }
};
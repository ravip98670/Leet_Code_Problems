class Solution {
public:
    string removeTrailingZeros(string num) {
        string str = "";
       
        int i = num.size()-1;
        for(;i >= 0;i--){
            if(num[i] != '0')
                break;
        }
        cout<<i<<endl;
        for(int j=0;j<=i;j++){
            str += num[j];
        }

        return str;
    }
};
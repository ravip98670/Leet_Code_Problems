class Solution {
string DecToBinary(int num){
        string str;
        while(num){
          if(num & 1) 
            str += '1';
          else 
            str += '0';
          num>>=1;  
        }   
         return str;
}
public:
    vector<int> evenOddBit(int n) {
        string str = DecToBinary(n);
        int even = 0;
        int odd = 0;
        for(int i=0;i<str.size();i++){
            if((i == 0 || i%2 == 0) && str[i] == '1')
                even++;
            else if(i%2 != 0 && str[i] == '1')
                odd++;
        }
        vector<int> ans;
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
    }
};
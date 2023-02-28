class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        
        int n = word.size();
        int i = 0;
   
        vector<int> res(n, 0);
        string temp = "";
        long long int sum=0;
        
        for(int i = 0; i < word.size(); i++){
            sum *= 10;
            sum += word[i]-'0';
            sum %= m;
            if(sum==0){
               res[i]=1;
            }else{
                res[i]=0;
            }
        }
        return res;
    }
};
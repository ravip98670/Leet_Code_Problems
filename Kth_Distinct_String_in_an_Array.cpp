class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string,int> hold;
        for(string s:arr){
            hold[s]++;
        }
        
        for(string s:arr){
            if(hold[s] == 1)
                k--;
            if(k == 0)
                return s;
        }
        return "";
    }
};
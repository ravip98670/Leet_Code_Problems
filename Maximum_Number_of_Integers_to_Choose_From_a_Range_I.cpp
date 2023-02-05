class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        
        unordered_map <int,int> fill;
        for(auto i:banned){
            fill[i]++;
        }
        
        int bacha = 0;
        int curr = 0;
        
        for(int i=1;i<=n;i++){
            if(fill.count(i) == 0 && (bacha+i)<=maxSum){
                bacha += i;
                curr++;
            }
        }
        return curr;
    }
};
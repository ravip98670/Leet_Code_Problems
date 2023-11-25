class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        
        int ans = 0;
        int conH = 1;
        int conV = 1;
        int t1 = 1;
        int t2 = 1;
        
        sort(hBars.begin(),hBars.end());
        sort(vBars.begin(),vBars.end());
        
        for(int i=1;i<hBars.size();i++){
            if(hBars[i-1]+1 == hBars[i])
                t1++;
            else{
                conH = max(t1,conH);
                t1 = 1;
            }
        }
        conH = max(t1,conH);
        
        for(int i=1;i<vBars.size();i++){
            if(vBars[i-1]+1 == vBars[i])
                t2++;
            else{
                conV = max(t2,conV);
                t2 = 1;
            }
        }
        conV = max(t2,conV);
        
        ans = min(conH,conV) + 1;
        
        return ans*ans;
        
    }
};
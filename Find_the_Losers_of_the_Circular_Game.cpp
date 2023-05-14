class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int>val(n,0);
        vector<int>ans;
        int i=0,t=0;
        
        while(true){
            
            int tmp=(i+t*k)%n;
            if(val[tmp]==1)
                break;
            
            val[tmp]=1;
            i=tmp;
            t++;
        }
        
        
        for(int i=1;i<=val.size();i++){
                if(val[i-1]!=1)
                    ans.push_back(i);
        }
        return ans;
    }
};
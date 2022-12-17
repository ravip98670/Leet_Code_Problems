class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int count=0,val=1;
        int srow=0,scol=0;
        int erow=n-1,ecol=n-1;
        int len=n*n;
        while(len >= count){
            for(int i=scol;i<=ecol;i++){
                ans[srow][i]=val;
                val++;
                count++;
            }
            if(count>=len){
                break;
            }
            srow++;
            for(int i=srow;i<=erow;i++){
                ans[i][ecol]=val;
                val++;
                count++;
            }
            if(count>=len){
                break;
            }
            ecol--;
            for(int i=ecol;i>=scol;i--){
                ans[erow][i]=val;
                val++;
                count++;
            }
            if(count>=len){
                break;
            }
            erow--;
            for(int i=erow;i>=srow;i--){
                ans[i][scol]=val;
                val++;
                count++;
            }scol++;
        }
        return ans;    
    }
};
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> opt;
        int m = matrix.size();
        int n = matrix[0].size();
        int count=0;
        int srow=0,scol=0;
        int erow=m-1,ecol=n-1;
        int len=m*n;
        while(len >= count){
            for(int i=scol;i<=ecol;i++){
                opt.push_back(matrix[srow][i]);
                count++;
            }
            if(count>=len){
                break;
            }
            srow++;
            for(int i=srow;i<=erow;i++){
                opt.push_back(matrix[i][ecol]);
                count++;
            }
            if(count>=len){
                break;
            }
            ecol--;
            for(int i=ecol;i>=scol;i--){
                opt.push_back(matrix[erow][i]);
                count++;
            }
            if(count>=len){
                break;
            }
            erow--;
            for(int i=erow;i>=srow;i--){
                opt.push_back(matrix[i][scol]);
                count++;
            }scol++;
        }
        return opt;
    }
};
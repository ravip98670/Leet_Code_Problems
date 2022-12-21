class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(i!=j){
                    int temp=matrix[i][j];
                    matrix[i][j]=matrix[j][i];
                    matrix[j][i]=temp;
                    continue;
                }
                break;
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            int left=0;
            int right=matrix[i].size()-1;
            while(left < right){
                int temp=matrix[i][left];
                matrix[i][left]=matrix[i][right];
                matrix[i][right]=temp;
                left++;
                right--;
            }
        }
    }
};
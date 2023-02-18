class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size() == 0)
            return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int start = 0;
        int end = (m*n) - 1;
        
        while(start <= end){
            long long mid = (start + end) / 2;
            if(matrix[mid/m][mid%m] == target)
                return true;
            else if(matrix[mid/m][mid%m] < target)
                start = mid + 1;
            else 
                end = mid - 1;
        }
        return false;
    }
};
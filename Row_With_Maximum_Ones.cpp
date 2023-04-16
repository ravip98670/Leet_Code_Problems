class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        
        vector<int> hold;
        long long count = 0;
        int curr_ind = 0,ind = 0;
        long long curr_count ;
        for(int i=0;i<mat.size();i++){
            curr_count = 0;
            for(int j=0;j<mat[i].size();j++){
               curr_ind = mat[i][j];
              // cout<<curr_ind<<endl;
                if(mat[i][j] == 1)
                    curr_count++;
                
            }
            if(count < curr_count){
                count = curr_count;
                ind = i;
            }
            else if(count == curr_count)
                 count = curr_count; 
           // cout<<count<<" "<<curr_count<<endl;
        }
        hold.push_back(ind);
        hold.push_back(count);
        return hold;
    }
};
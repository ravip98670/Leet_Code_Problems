class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        
        int m = mat.size();
        int n = mat[0].size();
        
        vector<long> rsum(m,0);
        vector<long> csum(n,0);
        
        map<int,vector<int>> mp;
        for(int i=0;i<m;i++){
            
            for(int j=0;j<n;j++){
                rsum[i] += (long)mat[i][j];
              mp[mat[i][j]].push_back(i);
                mp[mat[i][j]].push_back(j);
                
               
                
            }
        }
         for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                csum[i] += (long)mat[j][i];
              
               
                
            }
        }
        
        for(int i=0;i<arr.size();i++){
           vector<int>m=mp[arr[i]];
            rsum[m[0]]-=arr[i];
            csum[m[1]]-=arr[i];
            if(rsum[m[0]]==0||csum[m[1]]==0){
                return i;
            }
        }
        return arr.size()-1;
    }
};
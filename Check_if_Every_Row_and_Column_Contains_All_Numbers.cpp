class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        for(int i=0;i<n;i++){
            map<int,int> mp1;
            for(int j=0;j<n;j++){
                mp1[matrix[i][j]]++;
            }
            
            for(int k=1;k<=n;k++){
                if(mp1.find(k) == mp1.end())
                    return false;
            }
        }
        for(int j=0;j<n;j++){
            map<int,int> mp2;
            for(int i=0;i<n;i++){
                mp2[matrix[i][j]]++;
            }
            
            for(int k=1;k<=n;k++){
                if(mp2.find(k) == mp2.end())
                    return false;
            }
        }
        return true;
    }
};
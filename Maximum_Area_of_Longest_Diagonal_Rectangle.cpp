class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        

        int maxA = 0;
        double maxD = 0;
        
        for (auto d : dimensions) {
            int l = d[0];
            int w = d[1];
            
           
            
            double di = sqrt(l * l + w * w);
            
            if ((di == maxD && (l*w) > maxA) || di > maxD) {
               
                maxA = l * w;
                 maxD = di;
            }
        }
        return maxA;
    }
};
class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& queries) {
        
        vector<int> color(n,0);
        int ans = 0;
        
        vector<int> wholeAns;
        for(int i=0;i<queries.size();i++){
            int index = queries[i][0];
            int newColor = queries[i][1];
            
            int leftSide = ((index-1) < 0 )? 0 : color[index-1];
            int rightSide = ((index+1) == n )? 0 : color[index+1];
            
            if(color[index] != 0 && leftSide == color[index]) ans--;
            if(color[index] != 0 && rightSide == color[index]) ans--;
            
            color[index] = newColor;
            
            if(leftSide == color[index]) ans++;
            if(rightSide == color[index]) ans++;
            
            wholeAns.push_back(ans);
        }
        return wholeAns;
        
    }
};
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> hold = heights;
        sort(heights.begin(),heights.end());
        
        int count = 0;
        for(int i=0;i<heights.size();i++){
            if(heights[i] != hold[i])
                count++;
        }
        return count;
    }
};
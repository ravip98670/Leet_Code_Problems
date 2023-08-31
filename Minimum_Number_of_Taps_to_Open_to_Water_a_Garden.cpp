class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        
        int min = 0, max = 0;
        int tap = 0, ind = 0;
        
        while(max < n){
            
            for(int i=ind;i<ranges.size();i++){
                if(i-ranges[i] <= min && i+ranges[i] > max){
                    max = i+ranges[i];
                    ind = i;
                }
            }
            if(min == max)
                return -1;
            tap++;
            min = max;
        }
        return tap;
    }
};
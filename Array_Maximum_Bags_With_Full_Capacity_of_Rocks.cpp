class Solution {
public:
    
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks){ 
        int full=0;
        int check=additionalRocks;
        vector <int> rockd;
        for(int i=0; i<capacity.size() ;i++){
            rockd.push_back(capacity[i]-rocks[i]);
        }
        sort(rockd.begin(),rockd.end());
        for(int i=0; i<rockd.size() ;i++){
            if(check >= rockd[i]){
                check -= rockd[i];
                full++;
            }
        }
        return full;
    }
    
};
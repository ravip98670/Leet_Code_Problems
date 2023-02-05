class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        
        long long remain = 0;
        while(k--){
            sort(gifts.begin(),gifts.end());
            
            gifts[gifts.size()-1] = sqrt(gifts[gifts.size()-1]);
            
        }
        
        for(int i=0;i<gifts.size();i++){
            remain += gifts[i];
        }
        return remain;
    }
};
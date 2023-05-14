class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int count = 0;
        for(int i=0;i<details.size();i++){
            int n1 = details[i][11] - '0';
            int n2 = details[i][12] - '0';
            
            if((n1*10 )+ n2  > 60)
                count++;
        }
        return count;
    }
};
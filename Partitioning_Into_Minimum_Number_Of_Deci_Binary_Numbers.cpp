class Solution {
public:
    
    int minPartitions(string n) {
        int max=INT_MIN;
        for(int i=0;i<n.size();i++){
            int diff=n[i]-'0';
            if(max <  diff)
                max=diff;
        }
        return max;
    }
};
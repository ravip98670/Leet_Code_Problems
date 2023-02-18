class Solution {
public:
    int minOperations(int n) {
        
        vector<int> hold;
        for(int i=0;i<n;i++){
            hold.push_back((2*i)+1);
        }
        
        long long sum = accumulate(hold.begin(),hold.end(),0);
        
        int target = sum/n;
        
        int oper = 0;
        for(int i=0;i<hold.size();i++){
            oper += abs(hold[i]-target);
        }
        return oper/2;
    }
};
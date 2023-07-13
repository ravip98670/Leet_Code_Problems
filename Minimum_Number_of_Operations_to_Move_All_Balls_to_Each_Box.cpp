

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.length();
        vector<int>res(n,0);
        
        int last = 0;
        int sum = boxes[0]-'0';
        for(int i=1;i<n;i++){
            res[i] += sum + last;
            last = res[i];
            sum += (boxes[i]-'0');
        }
        
        last = 0,sum = boxes[n-1]-'0';
        
        for(int i=n-2;i>=0;i--){
            res[i] += sum + last;
            last = (sum + last);
            sum += (boxes[i]-'0');
        }
        return res;
    }

};
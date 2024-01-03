class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans = 0;
        int last = 0;
        for(int i=0;i<bank.size();i++){
            int device = 0;
        
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j] == '1')
                    device++;
            }
            if(last == 0)
                last = device;
            else{
                ans += (last * device);
                if(device != 0)
                    last = device;
            }
        }
        return ans;
    }
};
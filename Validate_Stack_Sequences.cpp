class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        
        vector<int> skt;
        int i = 0, j = 0;
        while(i < pushed.size()){
            
            skt.push_back(pushed[i]);
            i++;
            
            while(!skt.empty() && skt[skt.size()-1] == popped[j]){
                skt.pop_back();
                j++;
            }
        }
        
        if(skt.size() != 0)
            return false;
        
        return true;
    }
};
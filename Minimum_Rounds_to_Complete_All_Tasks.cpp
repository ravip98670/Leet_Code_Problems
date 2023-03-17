class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int> hold;
        for(int i=0;i<tasks.size();i++){
            hold[tasks[i]]++;
        }
        int ans=0;
        for(auto i : hold){
            int temp = i.second;
            if(temp == 1)
                return -1;
            if(temp%3 == 0)
                ans += temp/3;
            else
                ans += temp/3 + 1;
        }
        return ans;
    }
};